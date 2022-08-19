#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s;
    getline(cin, s);
    int x=0; 
    for(int i=0; i<s.size()-1; i++) if(s[i]==' '&&s[i+1]!=' ') x++;
    if(s[0]!=' ') cout<<x+1;
    else cout<<x;
}