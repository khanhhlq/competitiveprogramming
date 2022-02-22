#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    do
    {
        cin >> n >> x;
    } while (n >= pow(10, 6) && abs(x) >= pow(10, 9));
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int count = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            count++;
    if (count != 0)
        cout << "YES";
    else
        cout << "NO";
}