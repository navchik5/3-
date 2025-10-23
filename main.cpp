#include <Windows.h>

#include <iostream>

#include "task1.h"
#include "task2.h"  // Старый класс Name
#include "task4.h"  // Новый класс NameV2
#include "task6.h"

int main() {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  int choice;

  do {
    std::cout << "\n=== ГЛАВНОЕ МЕНЮ ===" << std::endl;
    std::cout << "1. Задача 1 - Класс Human" << std::endl;
    std::cout << "2. Задача 2 - Класс Name (старая версия)" << std::endl;
    std::cout << "3. Задача 3 - Класс Pistol" << std::endl;
    std::cout
        << "4. Задача 4 - Класс NameV2 (новая версия с разными конструкторами)"
        << std::endl;
    std::cout << "0. Выход" << std::endl;
    std::cout << "Выберите задачу: ";
    std::cin >> choice;

    switch (choice) {
      case 1: {
        std::cout << "\n=== ЗАДАЧА 1: КЛАСС HUMAN ===" << std::endl;

        Human h1("Клеопатра", 152);
        Human h2("Пушкин", 167);
        Human h3("Владимир", 189);

        h1.print();
        h2.print();
        h3.print();
        break;
      }

      case 2: {
        std::cout << "\n=== ЗАДАЧА 2: КЛАСС NAME (СТАРАЯ ВЕРСИЯ) ==="
                  << std::endl;

        // Используем старый класс Name из task2.h
        Name n1("", "Клеопатра", "");
        Name n2("Пушкин", "Александр", "Сергеевич");
        Name n3("Маяковский", "Владимир", "");

        n1.print();
        n2.print();
        n3.print();
        break;
      }

      case 3: {
        std::cout << "\n=== ЗАДАЧА 3: КЛАСС PISTOL ===" << std::endl;

        Pistol myPistol(3);
        std::cout << "Создан пистолет с " << myPistol.getAmmo() << " патронами."
                  << std::endl;

        std::cout << "Производим 5 выстрелов:" << std::endl;
        for (int i = 0; i < 5; ++i) {
          myPistol.shoot();
        }

        std::cout << "После выстрелов осталось патронов: " << myPistol.getAmmo()
                  << std::endl;
        break;
      }

      case 4: {
        std::cout << "\n=== ЗАДАЧА 4: КЛАСС NameV2 (НОВАЯ ВЕРСИЯ) ==="
                  << std::endl;

        // Используем новый класс NameV2 из task4.h с разными конструкторами
        NameV2 name1("Клеопатра");                         // Только имя
        NameV2 name2("Владимир", "Маяковский");            // Имя и фамилия
        NameV2 name3("Александр", "Пушкин", "Сергеевич");  // Все три параметра
        NameV2 name4("Христофор", "Бонифатьевич");         // Имя и фамилия

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
        std::cout << "Выход из программы." << std::endl;
        break;

      default:
        std::cout << "Неверный выбор!" << std::endl;
    }

  } while (choice != 0);

  return 0;
}