#include <bits/stdc++.h>
using namespace std;
int uocchung(int a, int b)
{
    if (a > b)
        a = a - b;
    else if (b > a)
        b = b - a;
    else if (a == b)
        return a;
}

int main()
{
    int a, b;
    do
    {
        cin >> a >> b;
    } while (abs(a) >= 1000 && abs(b) >= 1000);

    cout << uocchung(abs(a), abs(b));
}