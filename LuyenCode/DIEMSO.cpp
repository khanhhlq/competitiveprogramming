#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, a=0; cin>>s;
    for(int i=0; i<s; i++){
        if(s[i]=='C' && s[i+1]!='C'){
            a++;
        }else{
            a+=1;
        }
    }
    cout << a;
}