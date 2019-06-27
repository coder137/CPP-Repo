#include <iostream>

using namespace std;

class Person {
private:
  int weight; // in kgs
  int height; // in cms

public:
  Person(string n, int w, int h) : name(n), weight(w), height(h) {}
  string name;

  friend double bmi(Person person);
  friend void info(const Person& person);
};

double bmi(Person person) {
  double bmi = (person.weight * 100 * 100) / (person.height * person.height * 1.0);
  return bmi;
}

// NOTE, You cannot modify the person value
void info(const Person& person) {
  cout << "Height: " << person.height << endl;

  // Illegal
  // person.height = 20;
}

int main()
{
    cout << "Hello world!" << endl;

    // Using friend functions
    // Friend functions can use private data (IMPORTANT)
    Person randomPerson("RandomPerson", 85, 190);
    cout << "BMI : " << bmi(randomPerson) << endl;

    // Const Parameter modifier
    info(randomPerson);

    return 0;
}
