#include <iostream>
using namespace std;

int main(){
    int n,ans=0; cin>>n;
    string s;
    while(n--){
        ans=0;
        cin>>s;
        for(int i=0; i<s.size(); i++) ans+=(int)s[i]-48;
        cout<<ans<<endl;
    }
}