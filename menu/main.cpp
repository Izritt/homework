#include <clocale>
#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"

int main() {
    std:: setlocale(LC_ALL, "");

    Daniil::MenuItem study_summ = { "1 - Хочу научиться складывать!", Daniil::study_summ };
    Daniil::MenuItem study_substract = { "2 - Хочу научиться вычитать!", Daniil::study_substract };
    Daniil::MenuItem study_multiply = { "3 - Хочу научиться умножать!", Daniil::study_multiply };
    Daniil::MenuItem study_divide = { "4 - Хочу научиться делить!", Daniil::study_divide };
    Daniil::MenuItem study_go_back = { "0 - Выйти в главное меню", Daniil::study_go_back };

    Daniil::MenuItem* study_children[] = {
        &study_summ,
        &study_substract,
        &study_multiply,
        &study_divide,
        &study_go_back
    };
    const int study_size = sizeof(study_children) / sizeof(study_children[0]);

    Daniil::MenuItem study = {"1 - Хочу учиться математике!", Daniil::study};
    Daniil::MenuItem exit = {"0 - Я лучше пойду полежу...", Daniil::exit};

    Daniil::MenuItem* main_children[] = { &exit, &study };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);

    int user_input;
    do {
        std::cout << "Обучайка приветствует тебя, мой юный ученик!" << std::endl;
        for (int i=1; i < main_size; i++) {
            std::cout << main_children[i]->title << std::endl;
        }
        std::cout << main_children[0]->title << std::endl;
        std::cout << "Обучайка > ";

        std::cin >> user_input;
        main_children[user_input]->func();

        std::cout << std:: endl;
    } while (true);

    return 0;
}