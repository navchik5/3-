#include <iostream>

#include "task2.h"

Name::Name(std::string last, std::string first, std::string middle)
    : lastName(last), firstName(first), middleName(middle) {}

void Name::print() const {
  std::string result;

  if (!lastName.empty()) result += lastName;
  if (!firstName.empty()) {
    if (!result.empty()) result += " ";
    result += firstName;
  }
  if (!middleName.empty()) {
    if (!result.empty()) result += " ";
    result += middleName;
  }

  std::cout << (result.empty() ? "Неизвестно" : result) << std::endl;
}