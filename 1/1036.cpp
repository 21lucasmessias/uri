#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
  double A, B, C;

  cin >> A >> B >> C;

  double D = B * B - (4 * A * C);

  if (D >= 0 && A != 0)
  {
    double x1 = (-B + sqrt(D)) / (2 * A);
    double x2 = (-B - sqrt(D)) / (2 * A);

    cout << fixed << setprecision(5) << "R1 = " << x1 << endl;
    cout << "R2 = " << x2 << endl;
  }
  else
  {
    cout << "Impossivel calcular" << endl;
  }
}