#include <bits/stdc++.h>
using namespace std;

void nhap(int a[], int &n)
{
    do
        cin >> n;
    while (n < 2 || n > 99);

    for (int i = 0; i <= n; i++)
        cin >> a[i];
}

int kiemtra(int k)
{
    if (k < 2)
        return 0;
    else
    {
        for (int i = 2; i <= k / 2; i++)
            if (k % i == 0)
                return 0; // Trả về false
        return 1;         // Trả về true
    }
}

void insonguyento(int a[], int n)
{
    for (int i = 0; i < n; i++)
        if (kiemtra(a[i])) // Nếu hàm kiemtra() trả về true thì in ra a[i]
            cout << a[i] << " ";
}

int main()
{
    int a[100];
    int n;
    nhap(a, n);
    insonguyento(a, n);
    return 0;
}