#include <bits/stdc++.h>
using namespace std;

int DEC2BIN(int n)
{
    if (n != 0)
    {
        DEC2BIN(n / 2);
        cout << n % 2;
    }
}

int main()
{

    int t, n[1000000];
    do
    {
        cin >> t;

    } while (t >= 1 && t >= pow(10, 5));

    for (int i = 0; i < t; i++)
        cin >> n[i];

    for (int i = 0; i < t; i++)
    {
        cout << DEC2BIN(n[i]);
    }
}
