#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    stack <char>brack;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='{' || s[i]=='[' ||  s[i]=='('){
            brack.push(s[i]);
        } else{
            break;
        }

        if(s[i]=='}'){
            s[i].pop
        }
    }
}

//// Cách 2
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     string s; cin>>s;
//     int a=0, b=0, c=0;
//     while(a!=-1 || b!=-1 || c!=-1)
//     {
//         a=s.find("()");
//         b=s.find("{}");
//         c=s.find("[]");
//         s.erase(a, 2);
//         s.erase(b, 2);
//         s.erase(c, 2);
//     }
//     if(s.empty()) cout << "Yes";
//     else cout << "No";
// }