#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, a[1000]; cin>>n;
    for(int i=0; i<n; i++){cin>>a[i];};
    sort(a, a+n);
    long long max1, max2;
    for(int i=n-1; i>=0; i--){
        if(a[i]!=a[i-1]){
            max1=a[i]*a[i-1];
            break;
        }
    }
    
    for(int i=0; i<n; i++){
        if(a[i]!=a[i+1]){
            max2=a[i]*a[i+1];
            break;
        }
    }
    cout<<max(max1,max2);
}
