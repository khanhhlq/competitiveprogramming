#include <bits/stdc++.h>
using namespace std;
int main(){
    float n, ans=0; cin>>n; float i=n;
    while(i>0){ans+=1/(i*(i+1)); i--;}
    cout <<setprecision(5)<<fixed<<ans;
}