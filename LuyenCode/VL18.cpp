#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;

    cin >> n;
    reverse(n.begin(), n.end());
    while (n[0] == '0')
        n.erase(0, 1);
    if (n.size() - 1 == '-')
        n.erase(n.size() - 1, 1);
    cout << n;
}