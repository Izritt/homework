#include <iostream>
#include "io.hpp"
#include "sort.hpp"

int main() {
  std::cout << "Программа: сортировка пузырьком (динамический массив)\n";
  std::size_t n = 0;
  int* data = hw::read_numbers(n);
  if (data == nullptr || n == 0) {
    std::cout << "Вы не ввели числа. Завершение.\n";
    return 0;
  }
  hw::print_numbers(data, n, "Исходные числа: ");
  hw::bubble_sort(data, n);
  hw::print_numbers(data, n, "Отсортированные числа: ");
  std::cout << "Готово.\n";
  delete[] data;
  return 0;
}
