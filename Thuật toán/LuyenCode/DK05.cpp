#include <math.h>
#include <iostream>
using namespace std;

bool kiemtra(long long n)
{
    long long j = sqrt(n);
    return (j * j == n);
}
int main()
{
    long long n;
    cin >> n;
    if (kiemtra(n) == true)
        cout << "YES";
    else
        cout << "NO";
}
