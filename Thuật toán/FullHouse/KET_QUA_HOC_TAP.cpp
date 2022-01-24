#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d, sum = 0;
    cin >> a >> b >> c >> d;
    sum = (a + b + c * 2 + d * 3) / 7;
    if (sum >= 8)
        cout << "GIOI";
    else if (sum < 8 && sum >= 6.5)
        cout << "KHA";
    else if (sum < 6.5 && sum >= 5)
        cout << "TRUNG BINH";
    else if (sum < 5)
        cout << "YEU";
}