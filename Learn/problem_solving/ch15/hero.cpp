#include "hero.h"


void Hero::printInfo() {
  cout << "Health: " << this->health << endl;
  cout << "Mana: " << this->mana << endl;
}

void setHealth(int health);
void setMana(int mana);

int getHealth();
int getMana();
