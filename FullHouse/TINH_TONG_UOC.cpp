#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, sum = 0;
    do
    {
        cin >> n;
    } while (n >= pow(10, 6));

    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            sum += i;
    cout << sum;
}