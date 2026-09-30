#include <iostream>
#include <clocale>

int main() {
    setlocale(LC_ALL, "Russian");

    double speed;       
    int timeSeconds;     

    std::cout << "Введите скорость: ";
    std::cin >> speed;

    std::cout << "Введите время: ";
    std::cin >> timeSeconds;

    double timeDouble = static_cast<double>(timeSeconds);
    double distance = speed * timeDouble;

    std::cout << "Расстояние = " << distance << " м" << std::endl;

    return 0;
}