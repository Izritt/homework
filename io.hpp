#pragma once
#include <cstddef>

namespace hw {
  int* read_numbers(std::size_t& n);
  void print_numbers(const int* a, std::size_t n, const char* prefix);
}
