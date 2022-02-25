#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    do
    {
        cin >> n;
    } while (0 >= n && n >= pow(10, 18));
    int POF3 = log(n) / log(3);
    if (n == pow(3, POF3))
        cout << POF3;
    else
        cout << "NO";
}