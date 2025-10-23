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

// ���������� ������ ��������
void Pistol::shoot() {
  if (magazineCapacity > 0) {
    std::cout << "���!" << std::endl;
    magazineCapacity--;  
  } else {
    std::cout << "����!" << std::endl;
  }
}

void Pistol::print() const {
  std::cout << "�������� ����� " << magazineCapacity << " ��������."
            << std::endl;
}

// ��������� ���������� ��������
int Pistol::getAmmo() const { return magazineCapacity; }
