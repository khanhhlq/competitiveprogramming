#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    while(n--){
        int x,sum=0; cin>>x;
        for(int i=1; i<=sqrt(x); i++){
            if(x%i==0){
                if(x/i!=i) sum+=x/i+i;
                else sum+=i;
            }
        }
        cout<<sum<<endl;
    }
}