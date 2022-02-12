#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    do
    {
        cin >> n;
    } while (n <= 2 && n >= 10 ^ 6);
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr + 1, arr + 1 + n);
    cout << arr[1];
}