#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    do
        cin >> n;
    while (n >= pow(10, 12));
    if (n == sqrt(n) * sqrt(n))
        cout << "YES";
    else
        cout << "NO";
}
