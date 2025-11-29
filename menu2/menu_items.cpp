#include "menu_items.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const Daniil::MenuItem Daniil::DATA_BASE = {
    "1 - Базы данных", Daniil::data_base, &Daniil::OTHER_TECH
};
const Daniil::MenuItem Daniil::PROGRAMMING = {
    "2 - Многопоточное программирование", Daniil::programming, &Daniil::OTHER_TECH
};
const Daniil::MenuItem Daniil::NETWORK_TECH = {
    "3 - Сетевые технологии", Daniil::network_tech, &Daniil::OTHER_TECH
};
const Daniil::MenuItem Daniil::OTHER_GO_BACK = {
    "0 - Выйти в предыдущее меню", Daniil::other_go_back, &Daniil::OTHER_TECH
};
namespace {
    const Daniil::MenuItem* const other_children[] = {
        &Daniil::OTHER_GO_BACK,
        &Daniil::DATA_BASE,
        &Daniil::PROGRAMMING,
        &Daniil::NETWORK_TECH
    };
    const int other_children_size = sizeof(other_children) / sizeof(other_children[0]);
}

const Daniil::MenuItem Daniil::LEARN_LANGUAGES = {
    "1 - Изучать языки программирования", Daniil::learn_languages, &Daniil::STUDY,
};
const Daniil::MenuItem Daniil::ALGORITHM = {
    "2 - Алгоритмы и их структуры", Daniil::algorithm, &Daniil::STUDY
};
const Daniil::MenuItem Daniil::OTHER_TECH = {
    "3 - Другие технологии", Daniil::show_menu_3, &Daniil::STUDY, other_children, other_children_size
};
const Daniil::MenuItem Daniil::PROG_GO_BACK = {
    "0 - Выйти в главное меню", Daniil::prog_go_back, &Daniil::STUDY
};
namespace {
    const Daniil::MenuItem* const study_children[] = {
        &Daniil::PROG_GO_BACK,
        &Daniil::LEARN_LANGUAGES,
        &Daniil::ALGORITHM,
        &Daniil::OTHER_TECH
    };
    const int study_children_size = sizeof(study_children) / sizeof(study_children[0]);
}

const Daniil::MenuItem Daniil::STUDY = {
    "1 - Изучать программирование", Daniil::show_menu_2, &Daniil::MAIN, study_children, study_children_size
};
const Daniil::MenuItem Daniil::EXIT = {
    "0 - Пойти играть в футбол", Daniil::exit, &Daniil::MAIN
};
namespace {
    const Daniil::MenuItem* const main_children[] = {
        &Daniil::EXIT,
        &Daniil::STUDY
    };
    const int main_children_size = sizeof(main_children) / sizeof(main_children[0]);
}

const Daniil::MenuItem Daniil::MAIN = {
    nullptr, Daniil::show_menu, nullptr, main_children, main_children_size
};