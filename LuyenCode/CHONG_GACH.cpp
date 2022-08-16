#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i){cin >> a[i];}
    sort(a, a + n, greater<int>());
    int idx = min(n - 1, a[0]);
    int i = 1;
    while (i < idx){idx = min(idx, i + a[i]); i++;}
    cout << idx + 1;
    return 0;
}