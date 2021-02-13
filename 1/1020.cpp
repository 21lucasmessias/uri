#include <iostream>

int main()
{
  int n;

  std::cin >> n;

  std::cout << n / 365 << " ano(s)" << std::endl;
  std::cout << (n % 365) / 30 << " mes(es)" << std::endl;
  std::cout << ((n % 365) % 30) << " dia(s)" << std::endl;
}