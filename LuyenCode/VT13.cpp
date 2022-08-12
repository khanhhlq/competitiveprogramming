#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int max = a[0] + a[n - 1];
    cout << max;
    int sum = 0; 
    int b[3];

    for (int i = 0; i <= n - 2; i++){
        sum = a[i] + a[i + 1];

        if(sum > max){
            max = sum;
            b[0] = a[i];
            b[1] = a[i + 1];
            cout << b[0] << " " << b[1];
        }
    }   
}
