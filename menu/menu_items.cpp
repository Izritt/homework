#include "menu_items.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const Daniil::MenuItem Daniil::ALG_SUMM = {
    "1 - Хочу научиться складывать!", Daniil::alg_summ, &Daniil::ALGEBRA
};
const Daniil::MenuItem Daniil::ALG_SUBSTRACT = {
    "2 - Хочу научиться вычитать!", Daniil::alg_substract, &Daniil::ALGEBRA
};
const Daniil::MenuItem Daniil::ALG_MULTIPLY = {
    "3 - Хочу научиться умножать!", Daniil::alg_multiply, &Daniil::ALGEBRA
};
const Daniil::MenuItem Daniil::ALG_DIVIDE = {
    "4 - Хочу научиться делить!", Daniil::alg_divide, &Daniil::ALGEBRA
};
const Daniil::MenuItem Daniil::ALG_GO_BACK = {
    "0 - Вернуться к выбору предметов", Daniil::alg_go_back, &Daniil::ALGEBRA
};

namespace {
    const Daniil::MenuItem* const algebra_children[] = {
        &Daniil::ALG_GO_BACK,
        &Daniil::ALG_SUMM,
        &Daniil::ALG_SUBSTRACT,
        &Daniil::ALG_MULTIPLY,
        &Daniil::ALG_DIVIDE
    };
    const int algebra_size = sizeof(algebra_children) / sizeof(algebra_children[0]);
}

const Daniil::MenuItem Daniil::CALCULUS_DIF = {
    "1 - Хочу изучить дифференциальное исчисление!", Daniil::calculus_dif, &Daniil::CALCULUS
};
const Daniil::MenuItem Daniil::CALCULUS_INT = {
    "2 - Хочу изучить интегральное исчисление!", Daniil::calculus_int, &Daniil::CALCULUS
};
const Daniil::MenuItem Daniil::CALC_GO_BACK = {
    "0 - Вернуться к выбору предметов.", Daniil::calc_go_back, &Daniil::CALCULUS
};

namespace {
    const Daniil::MenuItem* const calculus_children[] = {
        &Daniil::CALC_GO_BACK,
        &Daniil::CALCULUS_DIF,
        &Daniil::CALCULUS_INT,
    };
    const int calculus_size = sizeof(calculus_children) / sizeof(calculus_children[0]);
}

const Daniil::MenuItem Daniil::ALGEBRA = {
    "1 - Xочу изучать алгебру!", Daniil::show_menu, &Daniil::STUDY, algebra_children, algebra_size
};
const Daniil::MenuItem Daniil::CALCULUS = {
    "2 - Хочу изучать математический анализ!", Daniil::show_menu, &Daniil::STUDY, calculus_children, calculus_size
};
const Daniil::MenuItem Daniil::STUDY_GO_BACK = {
    "0 - Выйти в главное меню", Daniil::study_go_back, &Daniil::STUDY
};

namespace {
    const Daniil::MenuItem* const study_children[] = {
        &Daniil::STUDY_GO_BACK,
        &Daniil::ALGEBRA,
        &Daniil::CALCULUS
    };
    const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}


const Daniil::MenuItem Daniil::STUDY = {
    "1 - Хочу учиться математике!", Daniil::show_menu, &Daniil::MAIN, study_children, study_size
};
const Daniil::MenuItem Daniil::EXIT = {
    "0 - Я лучше пойду полежу...", Daniil::exit, &Daniil::MAIN
};

namespace {
    const Daniil::MenuItem* const main_children[] = {
        &Daniil::EXIT,
        &Daniil::STUDY
    };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const Daniil::MenuItem Daniil::MAIN = {
    nullptr, Daniil::show_menu, nullptr, main_children, main_size
};