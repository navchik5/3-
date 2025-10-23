#ifndef task6_H
#define task6_H

class Pistol {
 private:
  int magazineCapacity;

 public:
  Pistol(int initialAmmo);
  Pistol();
  void shoot();        
  void print() const;  
  int getAmmo() const;
};
#endif
