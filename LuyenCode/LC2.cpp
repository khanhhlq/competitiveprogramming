#include <bits/stdc++.h>
using namespace std;
int Fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main(){
    int n, dem=0; cin>>n;
    vector<int> T;
    for(int i=1; i<n; i++){
        if(n%i==0){
            dem++;
            T.push_back(i);
        }
    }

}