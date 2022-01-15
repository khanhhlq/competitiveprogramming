#include <iostream>

using namespace std;

int main()
{
    cout << "Nhap gioi han cua mang: ";
    int n;
    cin >> n;
    int a[n];
    int am, duong;
    am = 0;
    duong = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            duong++;
        }
        else
        {
            am++;
        }
    }

    cout << "So am = " << am << endl;
    cout << "So duong = " << duong;
    return 0;
}
