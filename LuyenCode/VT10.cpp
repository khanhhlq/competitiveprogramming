#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    do
    {
        cin >> n;
    } while (n != 0 && n >= pow(10, 4));
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n, greater<int>());
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}