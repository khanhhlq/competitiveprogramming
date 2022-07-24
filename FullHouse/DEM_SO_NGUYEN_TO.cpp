#include <bits/stdc++.h>
using namespace std;

void getData(int a[], int &n){
    do{
        cin >> n;
    } while (n <= 1 && n >= 10000);
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

int checkData(int k){
    if (k < 2)
        return 0; 
    else{
        for (int i = 2; i <= k/2; i++)
            if (k % i == 0)
                return 0;
        return 1;
    }

}

void printData(int a[], int &n){
    int count = 0;
    for (int i = 0; i < n; i++)
        if (checkData(a[i]))
            count++;
    cout << count;        
}

int main(){
    int n;
    int a[1000];
    getData(a, n);
    printData(a, n);
    return 0;
}
