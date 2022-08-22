#include <bits/stdc++.h>
using namespace std;
int prime(int n){
    if(n<2) return 0;
    else{
        for(int i=2; i<=n/2; i++)
            if(n%i==0) return 0;
        return n;
    }
}

int main(){
    int n, ans=0; cin>>n;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            if(n/i!=i) ans+=prime(n/i)+prime(i);
            else ans+=i;
        }
    }
    cout << ans;
}