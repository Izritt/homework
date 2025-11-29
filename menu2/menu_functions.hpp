#pragma once

#include "menu.hpp"

namespace Daniil {
    const MenuItem* show_menu(const MenuItem* current);
    const MenuItem* show_menu_2(const MenuItem* current);
    const MenuItem* show_menu_3(const MenuItem* current);

    const MenuItem* exit(const MenuItem* current);

    const MenuItem* learn_languages(const MenuItem* current);
    const MenuItem* algorithm(const MenuItem* current);
    const MenuItem* other_tech(const MenuItem* current);
    const MenuItem* prog_go_back(const MenuItem* current);

    const MenuItem* data_base(const MenuItem* current);
    const MenuItem* programming(const MenuItem* current);
    const MenuItem* network_tech(const MenuItem* current);
    const MenuItem* other_go_back(const MenuItem* current);

}