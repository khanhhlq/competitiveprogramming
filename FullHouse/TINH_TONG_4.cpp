#include <iostream>

using namespace std;

int main()
{
    int n, s = 0;
    do
    {
        cin >> n;
    } while (n <= 0);

    for (int i = 1; i <= n; i++)
    {
        s += i * 2;
    }

    cout << s;

    return 0;
}