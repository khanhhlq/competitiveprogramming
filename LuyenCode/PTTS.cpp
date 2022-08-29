#include<bits/stdc++.h>
#define PRIME 1
#define COMPOSITE 0
#define MAXNUMFACT 64

using namespace std;
typedef unsigned long long LLU;

LLU Fa[MAXNUMFACT];
int nfact = -1;
map <LLU, LLU> mp;

int miller_rabin_testing(int acc, LLU N);
void decompose(LLU p, int *k, LLU *m);
LLU llu_fsqrt(LLU N);
LLU mod_mul(LLU a, LLU b, LLU p);
LLU random64();
LLU next_prng(LLU x, LLU N);
LLU gcd(LLU a, LLU b);
LLU find_factor(LLU N);
LLU mod_power(LLU a, LLU b, LLU p);
void fast_native_fact(LLU N);
int llu_cmp(const void *a, const void *b);
void pollard_rho_fact(LLU N);
void print_factors();

int main () {
    ios::sync_with_stdio(false); cin.tie(0);
    LLU n;
    cin >> n;
	pollard_rho_fact(n);
	print_factors();
	return 0;
}

void pollard_rho_fact(LLU(N)){
	if(N == LLU(1)) return;
	else if(N < (LLU(1) << 10)) fast_native_fact(N);
	else if(miller_rabin_testing(10, N) == PRIME) Fa[++nfact] = N;
	else {
		LLU p = (LLU)0;
		while(p == 0 || p == N) p = find_factor(N);
		pollard_rho_fact(p);
		pollard_rho_fact(N/p);
	}
}

LLU find_factor(LLU N) {
	LLU x = random64()% N;
	LLU y = x;
	LLU p = 1;
	do{
		x = next_prng(x, N);
		y = next_prng(next_prng(y, N), N);
		if (x > y) p = gcd(x-y,N);
		else p = gcd(y-x,N);
	} while(p == 1);
	return p;
}

LLU next_prng(LLU x, LLU N){
	LLU xs = mod_mul(x,x,N);
	return xs + LLU(1);
}

void fast_native_fact(LLU N){
	while (N % 2 == 0){
		Fa[++nfact] = LLU(2);
		N = N/2;
	}
	while (N % 3 == 0){
		Fa[++nfact] = LLU(3);
		N = N/3;
	}
	if (N == 1) return;
	if (miller_rabin_testing(10, N) == PRIME ) {
			Fa[++nfact] = N;
			return;
	}
	LLU Q = 5;
	int diff = 2;
	int sqrtN = llu_fsqrt(N);
	while (Q <= sqrtN) {
		if (N %Q == 0) {
			Fa[++nfact] = Q;
			N = N/Q;
			sqrtN = llu_fsqrt(N);
			if (miller_rabin_testing(10, N) == PRIME ) {
				Fa[++nfact] = N;
				return;
			}
		}
		else {
			Q = Q + LLU(diff);
			diff = (diff&2) + 2;
		}
	}
}

void print_factors() {
	for (int i = 0; i <= nfact; i++){
		mp[Fa[i]]++;
	}
	for (auto it : mp) {
        cout << it.first << " " << it.second << "\n";
	}
}

int llu_cmp(const void *a, const void *b){
	return *(LLU*)a - *(LLU*)b;
}

int witness(LLU a,  LLU N){
    LLU m;
	int k;
	decompose(N-1, &k, &m);
	LLU B[k+1];
	B[0] = mod_power(a, m, N);
	if(B[0] == 1) return PRIME;
	else {
		int i = 1;
		while(i <= k) {
			B[i] =  mod_mul(B[i-1], B[i-1], N);
			if(B[i] == 1) {
				if(B[i-1] == N-1) return PRIME;
                else return COMPOSITE;
			}
			i++;
		}
	}
	return COMPOSITE;
}

int miller_rabin_testing(int acc, LLU N) {
	LLU a = 0;
	for (int i = 0; i <= acc; i++) {
		a = random64()%(N-2) + 2;
		if (gcd(a,N) != 1) return COMPOSITE;
		else if (mod_power(a, N-1, N) != 1) return COMPOSITE;
		else if (witness(a, N) == COMPOSITE) return COMPOSITE;
	}
	return PRIME;
}

void decompose(LLU p, int *k, LLU *m){
	int i = 0;
	while ((p & 1) == 0){
		i++;
		p = p >> 1;
	}
	*k = i;
	*m = p;
}

LLU mod_mul(LLU a, LLU b, LLU p){
	if (b == 1) return a % p;
	else {
		LLU x = mod_mul(a, b>>1, p);
		if ((b & 1) == 0) return (x<<1)%p;
		else return (((x<<1)%p)+a)%p;
	}
	return 0;
}

LLU mod_power(LLU a, LLU b, LLU p){
	if (b == 1) return a % p;
	else {
		LLU x = mod_power(a, b/2, p);
		if((b & 1) == 0) return mod_mul(x, x, p);
		else return (mod_mul(mod_mul(x, x, p), a, p));
	}
}

LLU gcd(LLU a, LLU b){
	LLU tmp;
	while  (b != 0){
		tmp = b;
		b = a % b;
		a = tmp;
	}
	return a;
}

LLU random64() {
	LLU n  = 0;
	int l = rand()%(RAND_MAX-2)+2;
	int r = rand()%(RAND_MAX) + rand()%2;
	n = n | LLU(r);
	n = n << 32;
	n = n | LLU(l);
	return n;
}

LLU llu_fsqrt(LLU  N){
	LLU X, A2, R;
	X = N;
	A2 = LLU(1) << 62;
	R = 0;
	while (N < A2) A2 >>= 2;
	while (A2 > 0) {
		if (X >= R + A2) {
			X -= R + A2;
			R = (R >> 1) + A2;
			A2 = A2>> 2;
		}
		else {
			A2 = A2 >> 2;
			R = R >> 1;
		}
	}
	return R;
}