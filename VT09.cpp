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
    
}