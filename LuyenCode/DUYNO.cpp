#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(cin>>s){
        int n=s.length();
        if(s[0]==s[n-1])cout<<"YES"<<endl; 
        else cout<<"NO"<< endl;
    }
}