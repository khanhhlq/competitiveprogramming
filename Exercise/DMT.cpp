#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
const int MAX = 1000010;
int P[MAX], T;

void init()
{
    fill(P+2, P+MAX, 1);
    for (int i=2; i<MAX; i++){
		if (i==3) --P[i];
        if (P[i]==1)
            for (int j=i+i; j<MAX; j += i) P[j] = 0;
        P[i]+=P[i - 1];
    }
}

int cal(ll x)
{
    ll i=sqrt(x/9);
    return P[i];
}

int main()
{
    init();
    cin >> T;
    while (T--)
    {
        ll a, b;
        cin >> a >> b;
        cout << cal(b) - cal(a - 1) << "\n";
    }
}