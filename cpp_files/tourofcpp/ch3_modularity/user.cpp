#include "vector.h"
#include <cmath>
#include <iostream>

auto sum_sqrt(Vector &v) -> double {
  auto sz = v.size();
  double sum{};
  for (int i{}; i < sz; i++) {
    sum += std::sqrt(v[i]);
  }
  return sum;
}

int main(void) {
  Vector v{5};
  auto size = v.size();
  auto element = v[2];
  std::cout << "Size of vector : " << size << "\n";
  std::cout << "Element : " << element << "\n";
  auto result = sum_sqrt(v);
  std::cout << "result : " << result << "\n";
  return 0;
}
