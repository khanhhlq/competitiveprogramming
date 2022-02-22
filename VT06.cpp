#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    do
    {
        cin >> n;
    } while (n >= 1 && n >= pow(10, 3));
    long long arr[n];
    for (int i = 0; i < n; i++)
        do
        {
            cin >> arr[i];
        } while (arr[i] >= pow(10, 6));
    int TBC = 0;
    for (int i = 0; i < n; i++)
        if (arr)
    float result = TBC / n;
    cout << fixed << setprecision(4) << result;
}