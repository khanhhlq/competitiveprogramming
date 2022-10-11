#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n,m,ans=0; cin>>n>>m;
    ll a[n];
    for(int i=0; i<n; i++) cin>>a[i]; 
    sort(a,a+n);
    for(int i=0; i<n; i++){
        if(m>0){ m-=a[i]; ans++; }
    }
    while(m>=a[0]){ m-=a[0]; ans++; }
    cout<<ans;
}