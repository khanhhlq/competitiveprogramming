#include <iostream>
using namespace std;
int main(){
    int n, m, k; cin>>n; int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
        if(i!=0){ m=max(a[i],a[i-1]); if(m==a[i]) k=i; else k=i-1; }
    }
    cout<<k;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     int max = arr[0], cs;
//     for (int i = 0; i < n; i++)
//     {
//         if (max <= arr[i])
//         {
//             max = arr[i];
//             cs = i;
//         }
//     }

//     cout << cs;
// }