#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, count = 0;
    do
    {
        cin >> n >> x;
    } while ((n >= 1 && n >= pow(10, 6)) && (abs(x) >= pow(10, 9)));
    int arr[n];
    for (int i = 0; i < n; i++)
        do
        {
            cin >> arr[i];
        } while (arr[i] >= pow(10, 9));
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    cout << count;
}