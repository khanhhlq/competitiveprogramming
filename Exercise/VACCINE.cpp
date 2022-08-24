#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
bool fibo(ll p){
    pwr = pow(p, 2) + 0.5;
    calc1 = (5 * pwr) + 4;
    calc2 = (5 * pwr) - 4;
    if(sqrt(calc1)==round(sqrt(calc1)) || sqrt(calc2)==round(sqrt(calc2)))
        return 0;
    return 1;
}
int main()
{
    ll n, a=0, d=0, k=0, b=0; cin >> n;
    while(n--){
        ll p, calc1, calc2, pwr;
        cin >> p;
        if(fibo(ll p)){
            d++;
            a+=p;
        }
    }
    cout << d << " " << a;
}