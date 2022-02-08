#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c, x, denta;
    cout << "Nhập giá trị 3 số a , b , c" << endl;
    cin >> a >> b >> c;
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << "INF";
            }
            else if (c != 0)
            {
                cout << "NO";
            }
        }
        else if (b != 0)
        {
            x = -c / b;
            cout << x;
        }
    }
    else if (a != 0)
    {
        denta = b * b - 4 * a * c;
        if (denta < 0)
        {
            cout << "NO";
        }
        else if (denta == 0)
        {
            x = -b / (2 * a);
            cout << x;
        }
        else if (denta > 0)
        {
            float x1 = (-sqrt(denta) - b) / (2 * a);
            float x2 = (sqrt(denta) - b) / (2 * a);
            cout << x1 << endl;
            cout << x2;
        }
    }
}
