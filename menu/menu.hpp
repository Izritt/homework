#pragma once

namespace Daniil {
    struct MenuItem {
        const char* const title;
        void (*func)();
    };
}