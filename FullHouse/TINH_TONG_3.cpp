#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n, i;
    float sum = 0.0;

    do
    {
        cin >> n;
    } while (n <= 0);

    for (i = 1; i <= n; i++)
    {
        sum += 1.0 / (i * (i + 1));
    }

    cout << fixed << setprecision(2) << sum << endl;

    return 0;
}