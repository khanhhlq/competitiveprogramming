#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, dem = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            dem++;
        }
    }
    if (dem == 2)
        cout << "YES";
    else
        cout << "NO";
}