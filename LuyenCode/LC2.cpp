#include <bits/stdc++.h>
using namespace std;
int Fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main(){
    int n, dem=0; cin>>n; int a[n];
    a[0]=1; a[1]=1;
    for(int i=2; i<n; i++){
        a[i]=a[i-1]+a[i-2];
        
    }

}
