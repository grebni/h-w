#include <iostream>
#include <vector>
#include <Windows.h>

double розрахуватиСереднє(const std::vector<int>& дані) {
    int сума = 0;
    for (int значення : дані) {
        сума += значення;
    }
    return static_cast<double>(сума) / дані.size();
}

int main() {

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    const int кількістьРодичів = 3;  
    std::vector<int> тривалістьЖиттяРодичів;

   
    for (int i = 0; i < кількістьРодичів; ++i) {
        int тривалістьЖиття;
        std::cout << "Введіть тривалість життя родича " << (i + 1) << ": ";
        std::cin >> тривалістьЖиття;
        тривалістьЖиттяРодичів.push_back(тривалістьЖиття);
    }

    
    double середнєЖиття = розрахуватиСереднє(тривалістьЖиттяРодичів);

    
    std::cout << "Очікувана тривалість життя: " << середнєЖиття << " років" << std::endl;

    return 0;
}
