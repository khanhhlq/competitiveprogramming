#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        sum += pow((-1), i) * i;
    cout << sum;
}