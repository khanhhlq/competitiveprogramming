#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a, b;
    char toan_tu;
    cin >> a >> toan_tu >> b;
    switch (toan_tu)
    {
    case '+':
        cout << setprecision(2) << fixed << a + b;
        break;
    case '-':
        cout << setprecision(2) << fixed << a - b;
        break;
    case '*':
        cout << setprecision(2) << fixed << a * b;
        break;
    case '/':
        if (b == 0)
            cout << "Math Error";
        else
            cout << setprecision(2) << fixed << a / b;
        break;
    }
}