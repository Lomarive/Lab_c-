#include <iostream>

int main() {
    setlocale(LC_ALL, "Ru");
    int chislo;

    std::cout << "Введите число математической операции (1-4): ";
    std::cin >> chislo;

    switch (chislo) {
    case 1:
        std::cout << "Операция: 1 - +";
        break;
    case 2:
        std::cout << "Операция: 2 - -";
        break;
    case 3:
        std::cout << "Операция: 3 - *";
        break;
    case 4:
        std::cout << "Операция: 4 - /";
        break;
    default:
        std::cout << "Ошибка";
        break;
    }

    return 0;
}