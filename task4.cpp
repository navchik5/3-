#include "task4.h"

#include <iostream>


NameV2::NameV2(const std::string& first)
    : firstName(first), lastName(""), middleName("") {}

NameV2::NameV2(const std::string& first, const std::string& last)
    : firstName(first), lastName(last), middleName("") {}

NameV2::NameV2(const std::string& first, const std::string& last,
               const std::string& middle)
    : firstName(first), lastName(last), middleName(middle) {}

void NameV2::print() const {
  std::string result;

  if (!lastName.empty()) {
    result += lastName;
  }

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