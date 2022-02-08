#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 1, result = 0;
    do
    {
        cin >> n;
    } while (abs(n) >= pow(10, 9));

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            result += i;
    }
    if (result == n)
        cout << "YES";
    else
        cout << "NO";
}