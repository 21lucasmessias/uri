#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
  double pi = 3.14159;
  double R;

  cin >> R;

  R = R * R * R;

  double res = 4.0 / 3.0 * pi * R;

  cout << fixed << setprecision(3) << res << endl;
}
