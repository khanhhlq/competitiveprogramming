#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, ans=0; cin>>n; int i=n + 1;
    while(i--){ans+=pow(i, 2);}
    cout << ans;
}