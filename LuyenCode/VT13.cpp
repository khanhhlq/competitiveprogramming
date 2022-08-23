#include <bits/stdc++.h>
using namespace std;
struct ans{
    int a, b;
};

int main()
{
    ans res;
    int n, max = 0;
    cin >> n;
    int a[10000];

    for (int i = 1; i <= n; i++){
        cin >> a[i];
        if(a[i] + a[i - 1] >= max){max = a[i - 1] + a[i], res.a = a[i - 1], res.b = a[i];}
    }

    if(a[1] + a[n] >= max ){
        res.a = a[1], res.b = a[n];
        if(res.a > res.b){cout << res.a << " " << res.b;} 
        else{cout << res.b << " " << res.a;} 
    } else{cout << res.a << " " << res.b;}
}