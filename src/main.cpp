#include <iostream>

#include "add/add.hpp"

int main(int, char **) {
  std::cout << "add(1, 2): " << add(1, 2) << std::endl;
  std::cout << "add(3, 4): " << add(3, 4) << std::endl;

  return 0;
}
