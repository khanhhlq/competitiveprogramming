#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 1, result;
    do
    {
        cin >> n;
    } while (abs(n) >= pow(10, 9));

    n = abs(n);
    if (n == 0)
        cout << "INF";
    else
        for (int i = n; i >= 1; i--)
            if (n % i == 0)
                cout
                    << i << " ";
}