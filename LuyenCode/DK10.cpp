#include <bits/stdc++.h>
using namespace std;

int kiemtranamnhuan(int year)
{
    if (year % 4 == 0 && year % 100 != 0)
        return 1;
    else
        return 0;
}
int main()
{
    int month, year;
    cin >> month >> year;
    if ((month >= 1 && month <= 12) && (year > 0 && year <= 100000))
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
        case 2:
            if (kiemtranamnhuan(year) == 1)
            {
                cout << "29";
            }
            else
            {
                cout << "28";
            }
            break;
        }
    }
    else
    {
        cout << "INVALID";
    }
}