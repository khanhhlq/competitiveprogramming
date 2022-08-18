#include <bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    if(b*d-e*a == 0 && c*d-f*a != 0){cout << "VONGHIEM";} 
    else if(b*d-e*a == 0 && c*d-f*a == 0){cout << "VOSONGHIEM";}
    else{
        double x,y;
        x=((double)(c*e-b*f))/((double)(a*e-b*d));
        y=((double)(c-a*x))/((double)(b));
        cout<<setprecision(2)<<fixed<<x<<" "<<y;
    }
}