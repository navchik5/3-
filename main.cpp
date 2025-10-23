#include <Windows.h>

#include <iostream>

#include "task1.h"
#include "task2.h"  // ������ ����� Name
#include "task4.h"  // ����� ����� NameV2
#include "task6.h"

int main() {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  int choice;

  do {
    std::cout << "\n=== ������� ���� ===" << std::endl;
    std::cout << "1. ������ 1 - ����� Human" << std::endl;
    std::cout << "2. ������ 2 - ����� Name (������ ������)" << std::endl;
    std::cout << "3. ������ 3 - ����� Pistol" << std::endl;
    std::cout
        << "4. ������ 4 - ����� NameV2 (����� ������ � ������� ��������������)"
        << std::endl;
    std::cout << "0. �����" << std::endl;
    std::cout << "�������� ������: ";
    std::cin >> choice;

    switch (choice) {
      case 1: {
        std::cout << "\n=== ������ 1: ����� HUMAN ===" << std::endl;

        Human h1("���������", 152);
        Human h2("������", 167);
        Human h3("��������", 189);

        h1.print();
        h2.print();
        h3.print();
        break;
      }

      case 2: {
        std::cout << "\n=== ������ 2: ����� NAME (������ ������) ==="
                  << std::endl;

        // ���������� ������ ����� Name �� task2.h
        Name n1("", "���������", "");
        Name n2("������", "���������", "���������");
        Name n3("����������", "��������", "");

        n1.print();
        n2.print();
        n3.print();
        break;
      }

      case 3: {
        std::cout << "\n=== ������ 3: ����� PISTOL ===" << std::endl;

        Pistol myPistol(3);
        std::cout << "������ �������� � " << myPistol.getAmmo() << " ���������."
                  << std::endl;

        std::cout << "���������� 5 ���������:" << std::endl;
        for (int i = 0; i < 5; ++i) {
          myPistol.shoot();
        }

        std::cout << "����� ��������� �������� ��������: " << myPistol.getAmmo()
                  << std::endl;
        break;
      }

      case 4: {
        std::cout << "\n=== ������ 4: ����� NameV2 (����� ������) ==="
                  << std::endl;

        // ���������� ����� ����� NameV2 �� task4.h � ������� ��������������
        NameV2 name1("���������");                         // ������ ���
        NameV2 name2("��������", "����������");            // ��� � �������
        NameV2 name3("���������", "������", "���������");  // ��� ��� ���������
        NameV2 name4("���������", "������������");         // ��� � �������

        std::cout << "1. ";
        name1.print();
        std::cout << "2. ";
        name2.print();
        std::cout << "3. ";
        name3.print();
        std::cout << "4. ";
        name4.print();

        break;
      }

      case 0:
        std::cout << "����� �� ���������." << std::endl;
        break;

      default:
        std::cout << "�������� �����!" << std::endl;
    }

  } while (choice != 0);

  return 0;
}