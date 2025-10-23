#include "task6.h"  

#include <iostream>

Pistol::Pistol(int initialAmmo) {
  if (initialAmmo >= 0) {
    magazineCapacity = initialAmmo;
  } else {
    magazineCapacity = 0;  
  }
}


Pistol::Pistol() {
  magazineCapacity = 5;  
}

// Реализация метода выстрела
void Pistol::shoot() {
  if (magazineCapacity > 0) {
    std::cout << "Бах!" << std::endl;
    magazineCapacity--;  
  } else {
    std::cout << "Клац!" << std::endl;
  }
}

void Pistol::print() const {
  std::cout << "Пистолет имеет " << magazineCapacity << " патронов."
            << std::endl;
}

// Получения количества патронов
int Pistol::getAmmo() const { return magazineCapacity; }
