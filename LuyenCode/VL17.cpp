#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, s = 0;
    do
    {
        cin >> a;
    } while (abs(a) >= 1000 && a == 0);
    a = abs(a);
    for (int i = 1; i <= a; i++)
        if (a % i == 0)
            s++;
    cout << s;
}