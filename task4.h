#ifndef TASK4_H
#define TASK4_H

#include <string>

class NameV2 {
 private:
  std::string firstName;
  std::string lastName;
  std::string middleName;

 public:
  NameV2(const std::string& first);
  NameV2(const std::string& first, const std::string& last);
  NameV2(const std::string& first, const std::string& last,
         const std::string& middle);

  void print() const;
};

#endif