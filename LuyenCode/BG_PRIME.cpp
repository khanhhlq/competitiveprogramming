#include <bits/stdc++.h>
using namespace std;
int prime(int p){
    int c=0;

    for(int i=1;i<=n; i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==3){
        cout << p;
    } 
}
int main(){
    int n; cin>>n;
    while(n--){
        if(n<2){
            return 0;
        } else{
            for(int i=2; i<=sqrt(n); i++){
                if(n%i==0){
                    return 0;
                }
                else{
                    prime(n);
                }
            }
        }
    }
}