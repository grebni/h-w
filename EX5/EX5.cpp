#include <iostream>
#include <cmath>
#include <Windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    double x, y;
    std::cout << "Введіть значення x: ";
    std::cin >> x;
    std::cout << "Введіть значення y: ";
    std::cin >> y;

    
    if (2 * y != 0) {
        
        double результат = std::sqrt(40 * std::cos(x) - std::cos(y) - std::pow(std::sin((x - y) / (2 * y)), 2));

        
        std::cout << "Значення виразу при заданих x та y: " << результат << std::endl;
    }
    else {
        std::cout << "Ділення на нуль: область визначення не виконується." << std::endl;
    }

    return 0;
}
