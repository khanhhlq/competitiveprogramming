#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k=1; cin>>n;
    int i=pow(3,k);
    while(i<=n){k++;i=pow(3,k);}
    cout << k << " "<< i << endl;
}