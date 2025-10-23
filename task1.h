#ifndef TASK1_H
#define TASK1_H

#include <string>

class Human {
 private:
  std::string name;
  int height;

 public:
  Human(std::string n = "", int h = 0);
  void print() const;
};

#endif
