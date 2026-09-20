#include <iostream>  
#include <iomanip>  

int main() {
    setlocale(LC_ALL, "Russian"); 
    // Переменные 
    double speed;      
    double time;        
    double distance;   

    std::cout << "Вычисление пути\n";
    std::cout << "Введите скорость (м/с): ";
    std::cin >> speed;

    std::cout << "Введите время (с): ";
    std::cin >> time;

    // Вычисление пути 
    // Формула: S = v * t
    distance = speed * time;

    // Вывод с двумя знаками после запятой
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Скорость: " << speed << " м/с\n";
    std::cout << "Время: " << time << " с\n";
    std::cout << "Путь: " << distance << " м" << std::endl;

    return 0;
}