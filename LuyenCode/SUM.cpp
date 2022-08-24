#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll cal(ll x){
    return pow(x,2)-pow(x-1,2);
}
int main(){
    ll n,a=0; cin>>n;
    for(int i=1; i<=n; i++) a+=cal(i);
    cout<<a;
}