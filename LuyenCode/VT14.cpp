#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n,a[10005];
    cin>>n;
    for (int i=0; i<n; i++){cin>>a[i];}   
    sort(a, a+n, greater<int>());
    int max1=a[0]*a[1];
    int max2=a[n-1]*a[n-2];
    int max0=max(max1,max2);
    cout<<max0;
}
