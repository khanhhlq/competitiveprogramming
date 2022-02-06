#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, result = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        result *= i;
    cout << result;
}
