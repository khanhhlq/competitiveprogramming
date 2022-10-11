#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n,m,bsize,ans=0; cin>>n>>m;
    ll a[n];
    for (int i=0; i<n; i++) cin>>a[i];
    sort(a,a+n);
    bsize=m;
    for (int i=0; i<n; i++){
        if(m-a[i]>0){
            m-=a[i];
        }
        if(m-a[i+1]<=0){
                m=bsize;
                ans++;
        }  
    }
    cout<<ans;
}