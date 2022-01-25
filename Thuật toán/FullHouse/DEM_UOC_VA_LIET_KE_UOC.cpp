#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, s = 0;
    do
    {
        cin >> n;
    } while (n >= pow(10, 6));

    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            s++;
    cout << s << endl;

    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            cout << i << " ";
}