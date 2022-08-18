#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    long long n,a[10005];
    cin>>n;
    for (long long i=0; i<n; i++){cin>>a[i];}   
    sort(a,a+n);
    long long max1=a[0]*a[1]*a[2];
    long long max2=a[n-1]*a[n-2]*a[n-3];
    long long max3=a[n-1]*a[0]*a[1];
    long long max0=max(max1,max2);
    long long max4=max(max0, max3);
    cout<<max4;
}
