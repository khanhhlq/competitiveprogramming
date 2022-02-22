#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    do
    {
        cin >> n;
    } while (n >= 1 && n >= pow(10, 3));
    int arr[n];
    for (int i = 0; i < n; i++)
        do
        {
            cin >> arr[i];
        } while (arr[i] >= pow(10, 6));
    int TBC = 0, dem = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 != 0)
        {
            TBC += arr[i];
            dem++;
        }
    cout << fixed << setprecision(4) << (float)TBC / dem;
}