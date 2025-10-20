#include <iostream>

int main() {
    int day, month, year;
    std::cout << "Введите дату дня" << std::endl;
    std::cin >> day;
    std::cout << "Введите число месяца" << std::endl;
    std::cin >> month;
    std::cout << "Введите год" << std::endl;
    std::cin >> year;

    int year_of_century = year % 100;
    int century = year/100;
    int weekday = (
        day
        + (13 * month - 1) / 5
        + year_of_century / 4
        +  century / 4
        - 2 * century
        + 777
        ) % 7;

    switch (weekday) {
        case 0: std::cout << "Суббота" << std::endl; break;
        case 1: std::cout << "Воскресенье" << std::endl; break;
        case 2: std::cout << "Понедельник" << std::endl; break;
        case 3: std::cout << "Вторник" << std::endl; break;
        case 4: std::cout << "Среда" << std::endl; break;
        case 5: std::cout << "Четверг" << std::endl; break;
        case 6: std::cout << "Пятница" << std::endl; break;
    }
}