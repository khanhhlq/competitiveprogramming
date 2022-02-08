#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] < a[j])
            {
                int bien_phu = a[i];
                a[i] = a[j];
                a[j] = bien_phu;
            }
    cout << a[0] << endl;
    cout << a[1];
}