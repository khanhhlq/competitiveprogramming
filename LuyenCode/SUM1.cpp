#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, sum = 0;
    do
    {
        cin >> n;
    } while (n >= pow(10, 6));

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << sum;
}
