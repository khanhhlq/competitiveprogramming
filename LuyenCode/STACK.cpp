#include <bits/stdc++.h>
using namespace std;
int t, x, y, top=0, sta[100005];
int main(){
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>x;
        switch(x){
            case 1:
                cin>>y;
                top++;
                sta[top]=y;
                break;
            case 2:
                if(top>0) top--;
                break;
            case 3:
                if(top>0) cout<<sta[top]<<"\n";
                else cout<<"Empty!"<<"\n";
                break;
        }
    }
}