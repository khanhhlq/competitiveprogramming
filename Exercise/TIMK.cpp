#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    int n,a; cin>>n;
    int k=n;
    while(k++){
        a=log(k)/log(3);
        if(pow(3,a)>n){cout<<a<<" "<<pow(3,a); break;}
    }
}