#include <iostream>
#include <cmath>
#include <Windows.h>
const double PI = 3.14159265358979323846;


double обчислитиZ1(double a) {
    double частка1 = std::pow(2 * std::sin(3 * PI - 2 * a), 2);
    double частка2 = std::pow(std::cos(5 * PI + 2 * a), 2);
    return частка1 * частка2;
}


double обчислитиZ2(double a) {
    double частка1 = 1 / 4.0;
    double частка2 = 1 / 4.0 * std::sin(5 / 2.0 * PI - 8 * a);
    return частка1 - частка2;
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    
    double a;
    std::cout << "Введіть значення a: ";
    std::cin >> a;

    
    double результатZ1 = обчислитиZ1(a);
    double результатZ2 = обчислитиZ2(a);

    
    std::cout << "Результат за першою формулою (z1): " << результатZ1 << std::endl;
    std::cout << "Результат за другою формулою (z2): " << результатZ2 << std::endl;

    return 0;
}
