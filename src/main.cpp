#include <iostream>

#include "calc/add.hpp"

int main(int, char **) {
  std::cout << "add(1, 2): " << calc::Add(1, 2) << std::endl;
  std::cout << "add(3, 4): " << calc::Add(3, 4) << std::endl;

  return 0;
}
