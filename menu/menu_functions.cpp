#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>

const Daniil::MenuItem* Daniil::show_menu(const MenuItem* current) {
    std::cout << "Обучайка приветствует тебя, мой юный ученик!" << std::endl;
    for (int i=1; i < current->children_count; i++) {
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Обучайка > ";

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;

    return current->children[user_input];
}

const Daniil::MenuItem* Daniil::exit(const MenuItem* current) {
    std::exit(0);
}

const Daniil::MenuItem* Daniil::alg_summ(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Daniil::MenuItem* Daniil::alg_multiply(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Daniil::MenuItem* Daniil::alg_substract(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Daniil::MenuItem* Daniil::alg_divide(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Daniil::MenuItem* Daniil::calculus_dif(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Daniil::MenuItem* Daniil::calculus_int(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Daniil::MenuItem* Daniil::study_go_back(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}

const Daniil::MenuItem* Daniil::calc_go_back(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}

const Daniil::MenuItem* Daniil::alg_go_back(const MenuItem* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}