#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    char x[50];
    string s;
    cin.getline(x, 5);
    getline(cin, s);
    a=s.find(x);
    while(a!=-1){s.erase(s.begin() + a); a=s.find(x);}
    cout << s;
}