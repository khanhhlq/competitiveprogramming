#include <bits/stdc++.h>
using namespace std;
void check(string s){
    int x=0;
    for(int i=0 ;i<s.length(); i++){if(s[i] == ' ' && s[i-1] != ' '){x++;}}
    cout<<x<<endl;
}
int main(){
    int n; cin>>n;
    cin.ignore();
    string T[1000];
    for(int i=0; i<n; i++){getline(cin, T[i]);}
    for(int i=0; i<n; i++){check(T[i]);}
}