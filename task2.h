#ifndef task2_H
#define task2_H

#include <string>

class Name {
 private:
  std::string lastName;
  std::string firstName;
  std::string middleName;

 public:
  Name(std::string last = "", std::string first = "", std::string middle = "");
  void print() const;
};

#endif