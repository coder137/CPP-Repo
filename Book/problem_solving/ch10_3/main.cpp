#include <iostream>

using namespace std;

class Player {

public:
  string name;
  int age;

  Player(string n, int a) : name(n), age(a) {}

  void information() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
  }
};

class Hero : public Player {

public:
  Hero(string name, int age) : Player(name, age) {}

  void save(string city) {
    cout << name << " is saving " << city << " from destruction" << endl;
  }
};

class Enemy : public Player {

public:
  Enemy(string name, int age) : Player(name, age) {}

  void destroy(string city) {
    cout << name << " is trying to destroy " << city << endl;
  }
};



int main()
{
    cout << "Hello world!" << endl;

    // Abstract data types (ADT) (hiding variables in private)
    // NOTE, Encapsulating variables in the private declarations and using it in functions

    // Inheritance usage
    Enemy enemy("Megamind", 25);
    Hero hero("Coder137", 23);

    // Specific functions on the derived class
    enemy.destroy("Mumbai");
    hero.save("Mumbai");

    // Base class functions
    enemy.information();
    hero.information();

    return 0;
}
