#include <bits/stdc++.h>

using namespace std;

int main()
{
  char nome[100];
  float s, t;
  float c = 0.15;

  cin >> nome >> s >> t;

  printf("TOTAL = R$ %.2f\n", s + t * c);

  return 0;
}