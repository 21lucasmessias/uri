#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double a = 12.0;
  int t, vm;

  cin >> t >> vm;

  cout << fixed << setprecision(3) << t * vm / a << endl;
}