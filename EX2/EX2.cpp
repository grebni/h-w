#include <iostream>
#include <cmath>
#include <Windows.h>
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int i;

   
    std::cout << "Введіть номер варіанта (значення i): ";
    std::cin >> i;

    
    double Ax = 0, Ay = 0;
    double Bx = i, By = i - 1;
    double Cx = -i, Cy = i + 1;

    
    double AB = std::sqrt((Bx - Ax) * (Bx - Ax) + (By - Ay) * (By - Ay));
    double BC = std::sqrt((Cx - Bx) * (Cx - Bx) + (Cy - By) * (Cy - By));
    double h = 2 * std::sqrt(AB * AB - (BC / 2) * (BC / 2));

    
    double p = (AB + BC + 2 * h) / 2;  
    double w = (2 / BC) * std::sqrt(p * (p - BC) * (p - AB) * (p - h));

   
    std::cout << "Висота трикутника (h): " << h << std::endl;
    std::cout << "Бісектриса трикутника (w): " << w << std::endl;

    return 0;
}
