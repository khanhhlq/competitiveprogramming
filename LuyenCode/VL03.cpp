#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s = 0;
    do
    {
        cin >> n;
    } while (n >= pow(10, 4));
    for (int i = 2; i <= n; i++)
        s += i;
    cout << s + 2 * n;
}