#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n, a=0, x=0; cin>>n;
        int k=n;
        if(n<38) cout<<n<<"\n";
        else{
            while(k%5!=0){ k++; x++; }
            if(x<3) cout << k <<"\n"; 
            else cout << n <<"\n";
        }
    }
}