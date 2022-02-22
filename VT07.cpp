#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[11];
    for (int i = 0; i < 10; i++)
    {
        do
        {
            cin >> arr[i];
        } while (abs(arr[i] >= pow(10, 9)));
    }
    int x, dem = 0;
    cin >> x;
    for (int i = 0; i < 10; i++)
    {
        if (x == arr[i])
        {
            cout << i + 1 << ' ';
            dem++;
        }
    }
    if (dem == 0)
    {
        cout << "-1";
    }
}