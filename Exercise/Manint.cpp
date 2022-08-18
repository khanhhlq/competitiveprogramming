#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    long long n, a[1000]; cin>>n;
    for(int i=0; i<n; i++){cin>>a[i];};
    sort(a,a+n);
    long long max1,max2;
    if(a[n-1]==a[n-2] && a[0]!=a[1]){max1=a[n-2]*a[n-3];max2= a[0]*a[1];}
    else if(a[0]==a[1] && a[n-1]!=a[n-2]){max1=a[n-1]*a[n-2];max2= a[1]*a[2];}
    else{max1=a[n-2]*a[n-3];max2= a[1]*a[2];}
    cout<<max(max1,max2);
}