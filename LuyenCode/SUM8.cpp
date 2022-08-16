#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin>>T;
    double n,ans=0;
    while(T--){
        cin>>n;
        for (int i=n; i>=1; i--){ans=sqrt(ans+i);}
        cout<<setprecision(5)<<fixed<<ans<<endl;
        ans=0;
    }
}