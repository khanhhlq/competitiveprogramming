#include <bits/stdc++.h>
using namespace std;
int main(){
    double a,b,m=1.0,n=1.0,d=0; cin>>a>>b;
    if(a==1) d=2;
    else if(a==2) d=1;
    while(n<=b){
        n+=m; m=n-m;
        if(n>=a) d++;
    }
    cout<<d-1;
}