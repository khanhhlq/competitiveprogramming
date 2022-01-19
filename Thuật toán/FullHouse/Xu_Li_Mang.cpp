#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap gioi han mang\n";
    cin >> n;
    int arr[n], s = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Mang vua nhap la: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Mang sap xep nguoc lai: ";

    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        s += arr[i];
    }

    cout << "Tong cac phan tu trong mang la: " << s;
}