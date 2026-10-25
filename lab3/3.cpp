#include <iostream>
int main() {
    setlocale(LC_ALL, "Russian");
    double rasstoyanie;
    double ves;
    int srochnost;
    double itog;
    std::cout << "Введите расстояние в км";
    std::cin >> rasstoyanie;
    std::cout << "Введите вес";
    std::cin >> ves;
    std::cout << "Срочность";
    std::cin >> srochnost;
    if (rasstoyanie <= 0 || ves <= 0) {
        std::cout << "Неправильный ввод данных";
    }
    else {
        itog = 50 + (10 * rasstoyanie) + (20 * ves);
    if (srochnost == 2) {
        itog = itog * 1.5;
    }
    std::cout << "Итог цены: " << itog;
}
return 0;
}
