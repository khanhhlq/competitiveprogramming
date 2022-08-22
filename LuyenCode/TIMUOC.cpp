#include <bits/stdc++.h>
using namespace std;
int main(){
    int q; cin>>q;
    while(q--){
        itn n, cin>>n;
        for(int i=1; i<=sqrt(n); i++){
            if(n%i==0){
                cout << i;
            }
        }
    }
}