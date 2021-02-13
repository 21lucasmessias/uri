#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  short unsigned int p1q, p2q;
  float p1v, p2v;

  cin >> p1q >> p1q >> p1v >> p2q >> p2q >> p2v;

  cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << (p1q * p1v + p2q * p2v) << endl;
}
