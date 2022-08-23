#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ll n; cin>>n;
    ll dem=1, x=n;
    vector<ll> T;
    while(n--){ ll k; cin>>k; T.push_back(k); }
    ll ans=T[1]-T[0];
    for(ll i=1; i<T.size(); i++)
        if(T[i+1]-T[i]==ans) dem++;
    if(dem==(x-1)) cout << "YES";
    else cout << "NO";
}