#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll prime(ll x){
    if(x<2){
        return 0;
    } else{
        for(int i=2; i<=sqrt(x); i++){
            if(x%i==0){
                return 0;
            }
        }
        return x;
    }
}
void dmt(ll a, ll b){
    ll x=0;
    ll ans=0;
    for(int i=a; i<=sqrt(b); i++){
        if(prime(i)){
            cout << "prime: " << prime(i)<<endl;
            x=9*(pow(i, 2));
            if(x<b && x>a){
                // cout << "x: " << x << endl;
                ans++;
            }
        }
        
        
    }
    cout << ans;


}
int main(){
    ll T; cin>>T;
    while(T--){
        ll a,b; cin>>a>>b;
        dmt(a,b);
    }
}