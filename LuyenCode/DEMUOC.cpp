#include <bits/stdc++.h>
int main(){
    int n, i=1; cin>>n;
    while(n--){
        if(n%i==0){
            dem++;
            while(n%i==0){
                n/=i;
            }
        }
        i++;
    }
}