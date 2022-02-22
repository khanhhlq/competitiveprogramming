#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    do
    {
        cin >> n;
    } while (n >= pow(10, 4));
    int arr[n];
    for (int i = 0; i < n; i++)
        do
        {
            cin >> arr[i];
        } while (arr[i] >= pow(10, 8));
    arr[n] = 0;
    for (int i = 0; i < n; i++)
        if (i % 2 != 0)
            arr[i] += abs(arr[i - 1] - arr[i + 1]);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}