#include <bits/stdc++.h>
using namespace std;

int prime(int n)
{
    if (n < 2)
        return 0;
    else
        for (int i = 2; i <= sqrt(n); i++)
            if (n % i == 0)
                return 0;
    return 1;
}
int main()
{
    int n, a[10000], f[10000], b[10000];
    do
    {
        cin >> n;
    } while (n >= pow(10, 4));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (prime(a[i]) == 1)
        {
            b[i] += a[i];
        }
    }
    
    sort(b, b + n);
    for (int i = 0; i < n; i++)
    {
        f[b[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (f[b[i]] > 1 && b[i] != 0 || (b[i] != 0 && f[b[i]] == 1))
        {
            cout << b[i] << " ";
            f[b[i]] = 0;
        }
    }
}