#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int year;
    do
    {
        cin >> year;
    } while (year >= pow(10, 6));

    if (year <= 0 || year > 100000)
    {
        cout << "INVALID";
    }
    else
    {
        if (year % 4 == 0 && year % 100 != 0)
            cout << "YES";
        else
            cout << "NO";
    }
}
