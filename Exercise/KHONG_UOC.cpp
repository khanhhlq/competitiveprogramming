#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,ans=1,dem=0,i=2;
    cin>>n;
    while(i<=n){
        if(n%i==0){
            dem++;
            long long demphu=0;
            while(n%i==0){demphu++; n/=i;}
            ans*=(demphu+1);
        }
        i++;
    }
    cout<<ans-dem;
}