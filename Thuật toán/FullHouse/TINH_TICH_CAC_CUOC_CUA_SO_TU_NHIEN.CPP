#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, tich = 1;
    do
    {
        cin >> n;
    } while (n > 100 && n < 0);
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            tich = tich * i;
    cout << tich;
}