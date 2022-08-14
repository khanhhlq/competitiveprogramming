#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long ans = 1, dem = 0;
    long long i = 2;

    while(i <= n){
        if(n % i ==0){
            dem++;
            long long demphu=0;
            while(n % i == 0){
                demphu++;
                n/=i;
            }
            ans*=(demphu+ 1);
        }
        i++;
    }
    
    cout << ans - dem;
  
}