#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, denta;
    do
    {
        cin >> a >> b >> c;
    } while (-1000 >= a, b, c >= 1000);

    if (a == 0)
    {
        if (b != 0)
            cout << -c / b;
        else if (b == 0)
        {
            if (c == 0)
                cout << "INF";
            else if (c != 0)
                cout << "NO";
        }
    }
    else if (a != 0)
    {
        denta = b * b - 4 * a * c;
        if (denta < 0)
            cout << "NO";

        else if (denta == 0)
            cout << -b / (2 * a);
        else if (denta > 0)
        {
            float x1 = (-sqrt(denta) - b) / (2 * a);
            float x2 = (sqrt(denta) - b) / (2 * a);
            if (x1 > x2)
                cout << setprecision(2) << fixed << x2 << " " << x1;
            else
                cout << setprecision(2) << fixed << x1 << " " << x2;
        }
    }
}