#include <bits/stdc++.h>
using namespace std;

int checkData(int k){
    if (k < 2){
        return 0;
    } else{
        for (int i = 2; i <= k/2; i++){
            if (k % 1 == 0){
                return 0;
            }
        }
        return 1;
    }
}

int main(){
    int n;

    do{
        cin >> n;
    } while (n <= 1 && n >= 10000);
    
    int arr[n];
    
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++){
        if (checkData(arr[i])){
            cout << arr[i] << " ";
        }
    }
}
