#include <iostream>
#include <Windows.h>
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double початковийВклад;
    const double річнийПриріст = 0.25;  

   
    std::cout << "Введіть початковий вклад: ";
    std::cin >> початковийВклад;

   
    for (int рік = 1; рік <= 10; ++рік) {
        початковийВклад *= (1 + річнийПриріст);
    }

    
    std::cout << "Значення вкладу через 10 років: " << початковийВклад << std::endl;

    return 0;
}
