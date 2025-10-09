#include "io.hpp"
#include <iostream>
#include <sstream>
#include <string>

namespace hw {
  int* read_numbers(std::size_t& n) {
    std::cout << "Введите целые числа через пробел и нажмите Enter:\n> ";
    std::string line;
    std::getline(std::cin, line);
    if (line.empty()) std::getline(std::cin, line);
    std::istringstream cnt_iss(line);
    int tmp = 0;
    std::size_t count = 0;
    while (cnt_iss >> tmp) { ++count; }
    n = count;
    if (n == 0) return nullptr;
    int* data = new int[n];
    std::istringstream fill_iss(line);
    for (std::size_t i = 0; i < n; ++i) fill_iss >> data[i];
    return data;
  }

  void print_numbers(const int* a, std::size_t n, const char* prefix) {
    std::cout << prefix;
    for (std::size_t i = 0; i < n; ++i) {
      if (i) std::cout << ' ';
      std::cout << a[i];
    }
    std::cout << '\n';
  }
}
