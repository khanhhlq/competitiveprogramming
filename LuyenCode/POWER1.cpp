#include <bits/stdc++.h>
#define ll long long;
using namespace std;
int main(){
    ll a, n, k, ans; cin>>a>>n;
    k=pow(a,n);
    ans=k%(pow(10,9)+7)
    cout<<ans;
}