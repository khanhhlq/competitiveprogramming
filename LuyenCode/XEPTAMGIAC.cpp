#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l[10000], dem = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> l[i];
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (l[i] + l[j] > l[j + 2])
            {
                dem++;
            }
        }
    }
    cout << dem;
}