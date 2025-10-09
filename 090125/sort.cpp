#include "sort.hpp"

namespace hw {
  void bubble_sort(int* a, std::size_t n) {
    if (a == nullptr || n < 2) return;
    bool swapped = false;
    for (std::size_t i = 0; i < n; ++i) {
      swapped = false;
      for (std::size_t j = 0; j + 1 < n - i; ++j) {
        if (a[j] > a[j + 1]) {
          int t = a[j];
          a[j] = a[j + 1];
          a[j + 1] = t;
          swapped = true;
        }
      }
      if (!swapped) break;
    }
  }
}
