#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t; cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        int i = s.length();
        int a=s.find("  ");
        while(a>-1){s.erase(a,1); a=s.find("  ");}
        while(i--){
            if(s[i]!=' '&&s[i-1]==' '){s[i]=toupper(s[i]);}
            else{s[i]=tolower(s[i]);}
        }
        s[0] = toupper(s[0]);
        cout << s << endl;
    }
}
