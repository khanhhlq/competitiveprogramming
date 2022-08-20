#include <bits/stdc++.h>
using namespace std;
int n, t, dem;
bool chk[10000000];
int main() {
    dem=0;
    cin>>n;
    for (int i=0; i<n; i++) {cin>>t; chk[t]=true;}
    for (int i=0; i<=2*n; i++) {
        if (chk[i]) dem++;
        else if (!chk[i]&&dem > 0) dem--;
    }
    cout<<n-dem;
    return 0;
} 