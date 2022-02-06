#include <bits/stdc++.h>
using namespace std;
int tohop(int k, int n)
{
    if (k == n || k == 0)
        return 1;
    return tohop(k, n - 1) + tohop(k - 1, n - 1);
}
int main()
{
    int n, k;
    cin >> n >> k;
    cout << tohop(k, n);
}