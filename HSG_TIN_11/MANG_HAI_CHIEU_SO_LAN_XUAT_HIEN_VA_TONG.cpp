#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll m,n,x,max,k,sum; cin>>m>>n>>x; 
    ll a[m][n]; max=0,k=0,sum=0;
    for (int i=0; i<m; i++) for (int j=0; j<n; j++) cin>>a[i][j];
    for (int i=0; i<m; i++) for (int j=0; j<n; j++)
        if (a[i][j]==x){ k+=1; cout<<x<<" tai "<<"a["<<i<<","<<j<< "]"<<"\n"; }
    cout<<"So lan "<<x<<" xuat hien la: "<<k<<" lan"<<"\n";
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++) if (a[i][j]>=max) max=a[i][j];
        sum+=max; max=0;
    }
    cout<<"Tong cac so lon nhat moi dong la: "<<sum;
}