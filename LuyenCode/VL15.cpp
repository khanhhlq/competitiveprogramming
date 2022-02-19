#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    do
    {
        cin >> a >> b;
    } while (abs(a) >= 1000 && abs(b) >= 1000);

    if (b == 0)
        cout << "INVALID" << endl;
    else
    {
        if (a % b == 0)
            cout << a / b;
        else
        {
            int new_a = a;
            int new_b = b;
            while (b != 0)
            {
                int tmp = a % b;
                a = b;
                b = tmp;
            }
            cout << new_a / a << " " << new_b / a;
        }
    }
}