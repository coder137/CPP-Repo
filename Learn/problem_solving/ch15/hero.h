#ifndef HERO_H
#define HERO_H

#include "player.h"
#include <iostream>

using namespace std;

class Hero : public Player {

public:
  Hero() : health(0), mana(0), Player() {}
  Hero(int health, int mana) : health(health), mana(mana), Player() {}

  void printInfo();

  void setHealth(int health);
  void setMana(int mana);

  int getHealth();
  int getMana();

private:
  int health;
  int mana;

};

#endif // HERO_H
