#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int n;
  float sum;
  sum = 0;
  cin >> n;

  for (int i = 1; i <= n; i++){
    sum = sum + 1/(i*n);
  }

  cout << sum;
}
