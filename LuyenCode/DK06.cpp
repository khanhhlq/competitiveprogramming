#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a, b;
    do
    {
        cin >> a >> b;
    } while (round(a) >= 1000 && round(b) >= 1000);
    if (a != 0)
        cout << setprecision(2) << fixed << float(-b) / a;
    else if (b == 0)
        cout << "INF";
    else
        cout << "NO";
}