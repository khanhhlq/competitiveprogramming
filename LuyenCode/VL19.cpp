#include <bits/stdc++.h>
using namespace std;
void xuat(int a, int b)
{
    int dem = 0;
    for (int i = b; i > a; i--)
    {
        if (i % 3 == 0 && (i > a && i < b))
        {
            cout << i << " ";
            dem++;
        }
    }
    if (dem == 0)
        cout << "NOT FOUND";
}
int main()
{
    int a, b;
    cin >> a >> b;
    xuat(a, b);
    return 0;
}