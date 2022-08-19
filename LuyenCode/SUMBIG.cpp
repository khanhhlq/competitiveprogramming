#include <bits/stdc++.h>
using namespace std;
string findSum(string s1, string s2){
    if(s1.length()>s2.length()) swap(s1,s2);
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    string str="";
    int carry=0;
    for(int i=0;i<s1.length();i++){
        int sum=((s1[i]-'0')+(s2[i]-'0')+carry);
        str.push_back(sum%10+'0');
        carry=sum/10;
    }
    for(int i=s1.length();i<s2.length();i++){
        int sum=((s2[i]-'0')+carry);
        str.push_back(sum%10+'0');
        carry=sum/10;
    }
    if(carry) str.push_back(carry+'0');
    reverse(str.begin(),str.end());
    return str;
}
int main(){
    ios_base::sync_with_stdio(0);
    string s1,s2; cin>>s1>>s2;
    cout<<findSum(s1,s2);
}