#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

using namespace std;

class Player {
public:
  Player() : name(""), age(0) {}
  Player(string name, int age) : name(name), age(age) {}

  void printInfo() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
  }

private:
  string name;
  int age;
};

#endif // PLAYER_H
