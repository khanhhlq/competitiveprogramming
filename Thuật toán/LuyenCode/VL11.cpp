#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, i = 1;
    long int dem = 0;
    cin >> n;
    if (n <= 1)
        cout << "NO";
    else
    {
        while (i <= trunc(sqrt(n)))
        {
            if (n % i == 0)
                dem++;
            i++;
        }
        if (dem == 1)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}