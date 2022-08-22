#include <tuple>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int prime(ll p){
    // if(n==2) return n;
    // for(ll i = 3; i<=sqrt(n); i+=2) {
    //     if(n%i == 0) break;
    // }
    // return n;
    long long int a = 2;
    if((long long int)(pow(a,p)-a)%(long long int)p==0){
        return p;
    }
    return 0;

}

int main(){
    ll n, ans=0; cin>>n;
    for(ll i=2; i<=sqrt(n); i++){
        if(n%i==0){
            if(n/i!=i) ans+=prime(n/i)+prime(i);
            else ans+=i;
        }
    }
    cout << ans;
}



    

    



// #include <bits/stdc++.h>
// using namespace std;
// int prime(int n){
//     if(n<2) return 0;
//     else{
//         for(int i=2; i<=n/2; i++)
//             if(n%i==0) return 0;
//         return n;
//     }
// }

// int main(){
//     int n, ans=0; cin>>n;
//     for(int i=1; i<=sqrt(n); i++){
//         if(n%i==0){
//             if(n/i!=i) ans+=prime(n/i)+prime(i);
//             else ans+=i;
//         }
//     }
//     cout << ans;
// }