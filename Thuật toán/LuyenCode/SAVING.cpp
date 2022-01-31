#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n, s = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        s = s + i;
        if (s >= n)
        {
            cout << i;
            break;
        }
    }
}

// Cac bị time out ở cái test case cuối :<