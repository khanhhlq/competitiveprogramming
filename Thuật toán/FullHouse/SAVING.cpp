#include <iostream>

using namespace std;

int main()
{
    int n, result = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        result = result + i;
        if (result >= n)
        {
            cout << i;
            break;
        }
    }
}