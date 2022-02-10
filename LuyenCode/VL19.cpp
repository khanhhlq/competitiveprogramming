#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, dem = 0;
    do
    {
        cin >> a >> b;
    } while (abs(a) >= 10000 && abs(b) >= 10000 && a <= b);

    for (int i = b; i > a; i--)
        if (i % 3 == 0 && (i > a && i < b))
        {
            cout << i << " ";
            dem++;
        }
    if (dem == 0)
        cout << "NOT FOUND";
}