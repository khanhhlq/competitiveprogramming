#include <bits/stdc++.h>
using namespace std;

int prime(int n)
{
    if (n < 2)
        return 0;
    else
        for (int i = 2; i <= sqrt(n); i++)
            if (n % i == 0)
                return 0;
    return 1;
}
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
    sort(arr[n], arr[n] + 1 + n);
    for (int i = 0; i < n; i++)
    {
        if(prime(arr[i]) == 1 && arr[i] != arr[i-1])
            cout << arr[i] << " ";
    }
}