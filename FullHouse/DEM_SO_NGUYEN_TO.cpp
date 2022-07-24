#include <iostream>
using namespace std;

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

int main(){
    int n;
    int a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int count = 0;
    for (int i = 0; i < n; i++)
        if (checkData(a[i]))
            count++;
    cout << count;
}
