#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,n; cin>>k>>n;
    int ans=0;
    while(n-- && k--){
        ans*=n/(k*(n-k));
    }
    cout << ans;
}