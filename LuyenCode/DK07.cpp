#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b, c, denta;
	float x1, x2;
	do {
		cin >> a >> b >> c;
	} while (-1000 >= a, b, c >= 1000);
	denta = b * b - 4 * a * c;
	if (a == 0) {
		if (b == 0) {
			if (c == 0)
				cout << "INF";
			else
				cout << "NO";
		} else if (b != 0)
			cout << setprecision(2) << fixed << (float)(-c) / b;
	} else {
		if (denta < 0)
			cout << "NO";
		else if (denta == 0)
			cout << setprecision(2) << fixed << (float)-b / (2 * a);
		else {
			x1 = (float)(-sqrt(denta) - b) / (2 * a);
			x2 = (float)(sqrt(denta) - b) / (2 * a);
			if (x1 > x2)
				cout << setprecision(2) << fixed << x2 << " " << x1;
			else
				cout << setprecision(2) << fixed << x1 << " " << x2;
		}
	}
}
