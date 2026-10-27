#include <iostream>

int main() {
    setlocale(LC_ALL, "Ru");
    int choice;
    double summa, stavka, result, dosrochno;
    int srok;
    std::cout << "1 Аннуитетный платеж, 2 Дифференцированный платеж, 3-Досрочное\n";
    std::cout << "Выберите тип: ";
    std::cin >> choice;

    std::cout << "Введите: сумма, ставка, срок ";
    std::cin >> summa >> stavka >> srok;
    double r = stavka / 100 / 12;

    switch (choice) {
    case 1:
        result = summa / srok + (summa * r);
        std::cout << "Аннуитетный платеж " << result << std::endl;
        break;
    case 2:
        result = summa / srok + (summa * r);
        std::cout << "Дифференцированный платеж " << result << std::endl;
        break;
    case 3:
        std::cout << "Досрочное погашение: ";
        std::cin >> dosrochno;
        std::cout << "Досчрочное:" << summa - dosrochno << std::endl;
        break;
    default:
        std::cout << "Ошибка" << std::endl;
    }

    return 0;
}