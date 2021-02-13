#include <iostream>
#include <iomanip>

int main()
{
  double A, B, C;
  double pi = 3.14159;

  std::cin >> A >> B >> C;

  std::cout << std::fixed << std::setprecision(3) << "TRIANGULO: " << A * C / 2 << std::endl;
  std::cout << "CIRCULO: " << pi * (C * C) << std::endl;
  std::cout << "TRAPEZIO: " << (A + B) * C / 2 << std::endl;
  std::cout << "QUADRADO: " << B * B << std::endl;
  std::cout << "RETANGULO: " << A * B << std::endl;
}