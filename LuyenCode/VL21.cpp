#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (x < n)
        {
            x += i;
        }
    }

    cout << x;
}