#include <iostream>

int main() {
    setlocale(LC_ALL, "Ru");
    int choice;
 
    std::cout << "Меню программы" << std::endl;
    std::cout << "1. Запуск" << std::endl;
    std::cout << "2. Настройки" << std::endl;
    std::cout << "3. Справка"<< std::endl;
    std::cout << "0. Выход" << std::endl;
    std::cout << "Выберите пункт: ";
    std::cin >> choice;
    switch (choice) {
    case 1:
        std::cout << "Запуск программы идет..." << std::endl;
        break;
    case 2:
        std::cout << "Настройки открываются..." << std::endl;
        break;
    case 3:
        std::cout << "открывается справка..." << std::endl;
        break;
    case 0:
        std::cout << "Выход..." << std::endl;
        break;
    }
    return 0;
}