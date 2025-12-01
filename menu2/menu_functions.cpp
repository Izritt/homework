#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>

namespace {
    const Daniil::MenuItem* display_menu(const Daniil::MenuItem* current) {
        for (int i = 1; i < current->children_count; i++) {
            std::cout << current->children[i]->title << std::endl;
        }
        std::cout << current->children[0]->title << std::endl;
        std::cout << "Ввод >";

        int user_input;
        std::cin >> user_input;
        std::cout << std::endl;

        return current->children[user_input];
    }
}

const Daniil::MenuItem* Daniil::show_menu_3(const MenuItem *current) {
    std::cout << "Третий уровень:" << std::endl;
    return display_menu(current);
}

const Daniil::MenuItem* Daniil::show_menu_2(const MenuItem *current) {
    std::cout << "Второй уровень меню:" << std::endl;
    return display_menu(current);
}

const Daniil::MenuItem* Daniil::show_menu(const MenuItem *current) {
    std::cout << "Главное меню:" << std::endl;
    return display_menu(current);
}

const Daniil::MenuItem* Daniil::exit(const MenuItem *current) {
    std::exit(0);
}

const Daniil::MenuItem* Daniil::network_tech(const MenuItem *current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Daniil::MenuItem* Daniil::programming(const MenuItem *current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Daniil::MenuItem* Daniil::data_base(const MenuItem *current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}
const Daniil::MenuItem* Daniil::other_go_back(const MenuItem *current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}

const Daniil::MenuItem* Daniil::prog_go_back(const MenuItem *current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}

const Daniil::MenuItem* Daniil::other_tech(const MenuItem *current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Daniil::MenuItem* Daniil::algorithm(const MenuItem *current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Daniil::MenuItem* Daniil::learn_languages(const MenuItem *current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}