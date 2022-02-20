#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0 || b == 0)
        return a + b;
    while (a != b)
        if (a > b)
            a -= b;
        else
            b -= a;
    return a;
}
int main()
{
    int a, b;
    do
    {
        cin >> a >> b;
    } while (a * b != 0 && abs(a) >= 1000 && abs(b) >= 1000);

    int lcm = a * b / gcd(a, b);
    cout << lcm;
}