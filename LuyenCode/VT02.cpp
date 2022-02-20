#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    do
    {
        cin >> n;
    } while (n <= 2 && n >= pow(10, 9));
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int max = arr[0];
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            int tg = arr[i];
            if (arr[j] > arr[i])
            {
                arr[i] = arr[j];
                arr[j] = tg;
            }
        }
    int res = arr[0];
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (res == arr[i])
            count++;
        else
            break;
    }
    if (count == n - 1)
        cout << "NOT FOUND";
    else
        cout << arr[count + 1];
    return 0;
}