#include <bits/stdc++.h>
using namespace std;
int main(){
    double a;cin>>a;
    double hv=pow(a,2)/2;
    double ht=(M_PI*pow(a,2))/4-hv;
    cout<<setprecision(3)<<fixed<<2*hv+2*ht;
}