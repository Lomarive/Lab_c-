#include <iostream>
#include <clocale>

int main() {
    setlocale(LC_ALL, "Russian");

    double a;
    double b;

    std::cout << "Введите первое число: ";
    std::cin >> a;

    std::cout << "Введите второе число: ";
    std::cin >> b;

    double difference = a - b;

    std::cout << "Разность a - b = " << difference << std::endl;

    return 0;
}
