#include <iostream>
int main() {
    setlocale(LC_ALL, "Russian");
    int day;

    std::cout << "Введите день недели от 1 до 7:";
    std::cin >> day;

    if (day == 1) {
        std::cout << "Понедельник, работа";
    }
    else if (day == 2) {
        std::cout << "Вторник, работа";
    }
    else if (day == 3) {
        std::cout << "Среда, работа";
    }
    else if (day == 4) {
        std::cout << "Четверг, работа";
    }
    else if (day == 5) {
        std::cout << "Пятница, работа";
    }
    else if (day == 6) {
        std::cout << "Суббота, выходной";
    }
    else if (day == 7) {
        std::cout << "Воскресенье, выходной";
    }
    else {
        std::cout << "Ошибка";
    }
    return 0;
}