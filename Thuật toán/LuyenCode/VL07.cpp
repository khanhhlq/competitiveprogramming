#include <bits/stdc++.h>
using namespace std;
int main()

{
    long long k, n, trung_gian, result = 1;
    cin >> k >> n;
    trung_gian = n - k;
    for (int i = 1; i <= n; i++)
        n *= i;
    for (int i = 1; i <= k; i++)
        k *= i;
    for (int i = n; i <= (n - k); i++)
        trung_gian *= 1;
    cout << n / (k * (trung_gian));
}