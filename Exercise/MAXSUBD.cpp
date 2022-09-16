#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n, d, sum=0, max=0; cin>>n>>d;
    ll a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<=n-d; i++){
        ll sum_extra=0;
        for(int j=i; j<i+d; j++){
            sum_extra+=a[j];
        }
        if(sum_extra>max){
            max=sum_extra;
        }
        
   
    }
    cout << max;
    

}