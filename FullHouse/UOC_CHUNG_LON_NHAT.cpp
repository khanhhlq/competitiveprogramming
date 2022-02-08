#include <iostream>
#include <math.h>
#define MAX 100;

using namespace std;

int UCLN(int x, int y)
{
    while (x != y)
    {
        if (x < y)
        {
            y = y - x;
        }
        else if (x > y)
        {
            x = x - y;
        }
    }
    return x;
}

int Tim_UCLN_MANG(int a[], int n)
{
    int x = a[0];
    for (int i = 1; i < n; i++)
    {
        x = UCLN(x, a[i]);
    }
    return x;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << Tim_UCLN_MANG(a, n);
}
