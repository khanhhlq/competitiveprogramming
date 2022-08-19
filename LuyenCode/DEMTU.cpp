#include <bits/stdc++.h>
using namespace std;
int main(){
    int dem=0; string s[100002];
    getline(cin,s);
    for(int i=0; i<s.length(); i++){
        if(s[i]==' ' && s[i+1]!=' '){dem++;
        } else if(s[i]!=' '){
            dem++;
        } else{
            cout << dem;
        }
    }
    cout << dem;
}

// Python
// s = input()
// print(len(s.split()))