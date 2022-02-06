#include <bits/stdc++.h>
using namespace std;
int main()
{
    int month, year;
    do
    {
        cin >> month >> year;
    } while (0 > month >= 100 && 0 > year >= 100000);

    if (1 <= month <= 12 && 0 < year <= 100000)
    {
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "31";
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "30";
            break;
        }
    }
    else
    {
        cout << "INVALID";
    }
}