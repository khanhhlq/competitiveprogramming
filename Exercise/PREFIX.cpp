#include <bits/stdc++.h>
using namespace std;
bool check(string a, string b){
    if(a.length() > b.length()){
        return false;
    } else{
        for(int i=0; i<a.length(); i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    int n, dem=0; cin>>n;
    cin.ingore();
    vector<string> v;
    while(n--){
        string s;
        getline(cin,s);
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            if(check(a[i], a[j])){
                dem++;
            }
        }
    }
    cout << dem;


}