#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        int sqr = sqrt(i);
        if (sqr * sqr == i)
        {
            cout << i << " ";
        }
    }
}
