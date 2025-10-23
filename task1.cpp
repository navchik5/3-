#include "task1.h"

#include <iostream>

Human::Human(std::string n, int h) : name(n), height(h) {}

void Human::print() const {
  std::cout << name << ", рост: " << height << std::endl;
}