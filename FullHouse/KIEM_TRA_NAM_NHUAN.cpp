#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    do
    {
        cin >> n;
    } while (n >= pow(-10, 6) && n >= pow(10, 6));

    if (n <= 0)
        cout
            << "INVALID";
    else if (n % 4 == 0 && n % 100 != 0)
        cout
            << "YES";
    else
        cout << "NO";
}