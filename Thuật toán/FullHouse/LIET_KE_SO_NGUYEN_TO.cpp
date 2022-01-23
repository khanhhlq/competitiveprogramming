#include <bits/stdc++.h>
using namespace std;

void nhap(int a[], int &n)
{
    do
        cin >> n;            // Nhập số nguyên n: tối ta của mảng a
    while (n < 2 || n > 99); // Nếu n nằm ngoài phạm vi này thì không nhận thêm n

    for (int i = 0; i <= n; i++) // Nhập các phần tử vào mạng có giới hạn là n phần tử
        cin >> a[i];
}

int kiemtra(int k) // Kiểm tra từng phần tử a[i] trong mảng
{
    if (k < 2) // Nếu phần tử này bé hơn 2 thì đó không phải là số nguyên tố nên trả vể false và không in ra
        return 0;
    else
    {
        // Nếu phần từ đó chia hết cho một số thứ 3 nào đó trong phạm vi từ 2 đến n / 2
        // ( Chú thích: vì số nguyên số chia hết cho một số lớn nhất là bằng số số nguyên tố đó chia cho 2)
        for (int i = 2; i <= k / 2; i++)
            if (k % i == 0)
                return 0; // Trả về false ( Không in ra )
        return 1;         // Trả về true ( In ra )
    }
}

void insonguyento(int a[], int n) // Hàm in ra các số nguyên tố
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