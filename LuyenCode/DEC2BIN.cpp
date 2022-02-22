#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, n[10001];
    do
    {
        cin >> t;
        for (int i = 0; i < t; i++)
            cin >> n[i];
    } while ((t >= 1 && t >= pow(10, 5)) && (n >= 1 && n >= pow(10, 18)));
}
