#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long int n1, n2;

  while (scanf("%lld %lld", &n1, &n2) != EOF)
  {
    cout << (n1 ^ n2) << endl;
  }
}