#include <iostream>
#include <cmath>
#include <Windows.h>
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
  
    double b = 7.1;
    double t = 2;

    
    double a = std::sqrt(b + std::pow(t, 2));

    
    double x = std::pow(std::cos(b), 2) + std::pow(std::sin(a), 2);

    
    double y = std::pow(x, 2) + std::cbrt(std::abs(x));

    
    std::cout << "Значення функції F(x) при x = " << x << ": " << y << std::endl;

    return 0;
}



