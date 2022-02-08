#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    do
    {
        cin >> n;
    } while (abs(n) >= pow(10, 4));
    for (int i = n; i >= 1; i--)
        if (n % i == 0)
            cout << i << " ";
}