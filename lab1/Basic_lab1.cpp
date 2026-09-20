#include <iostream>  

int main() {
  
    setlocale(LC_ALL, "Russian");

    // Объявление переменных
    double num1;
    double num2;
    double minus;
 
    std::cout << "Разность чисел\n";
    std::cout << "Введите первое число: ";

    std::cin >> num1;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    //  Вычисление разности 
    minus = num1 - num2;

    // Вывод результата 
    std::cout << "Разность: " << num1 << " - " << num2
        << " = " << minus << std::endl;

    return 0;
}