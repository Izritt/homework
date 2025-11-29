#pragma once

#include "menu.hpp"

namespace Daniil {
    const MenuItem* show_menu(const MenuItem* current);

    const MenuItem* exit(const MenuItem* current);

    const MenuItem* study_go_back(const MenuItem* current);

    const MenuItem* alg_summ(const MenuItem* current);
    const MenuItem* alg_substract(const MenuItem* current);
    const MenuItem* alg_multiply(const MenuItem* current);
    const MenuItem* alg_divide(const MenuItem* current);
    const MenuItem* alg_go_back(const MenuItem* current);

    const MenuItem* calculus_dif(const MenuItem* current);
    const MenuItem* calculus_int(const MenuItem* current);
    const MenuItem* calc_go_back(const MenuItem* current);

}