#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int n, s;
  s = 0;
  cin >> n;

  for (int i = 1; i <= n; i++){
    if(n % i == 0){
      s++;
    }
  }

  cout << s << endl;

  for (int i = 1; i <= n; i++){
    if(n % i == 0){
      cout << i << " ";
    }
  }

}
