#include <bits/stdc++.h>
using namespace std;
int main()
{
    int id, n, x = 0;
    do
    {
        cin >> n;
    } while (n != 0 && n <= 5 && n >= pow(10, 9));

    for (int i = 1; i <= n; i++)
    {
        x += i;
        if (x > n)
        {
            id = i - 1;
            break;
        }
    }
    cout << id;
}