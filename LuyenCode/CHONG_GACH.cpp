#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    int idx = min(n - 1, a[0]);
    int i = 1;
    while (i < idx)
    {
        idx = min(idx, i + a[i]);
        i++;
    }
    cout << idx + 1;
    return 0;
}

// Cách giải 1

// #include <iostream>
// #include <bits/stdc++.h>

//     using namespace std;
// int main()
// {
//     int n, k = 0, a[101];
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//         cin >> a[i];
//     sort(a + 1, a + n + 1);
//     for (int i = 1; i <= n; i++)
//         if (a[i] >= k)
//         {
//             k++;
//             for (int i = 1; i <= n; i++)
//             {
//                 a[i] = arr[i] - 1;
//             }
//         };
//     cout << k;
//     return 0;
// }