#include <iostream>
int main() {
	setlocale(LC_ALL, "Russian");

	int chislo;
	std::cout << "Введите число: ";
	std::cin >> chislo;
	if (chislo == 0) {
		std::cout << "Это ноль";
	}
	else {
		std::cout << "Не ноль";
	}
	return 0;
}