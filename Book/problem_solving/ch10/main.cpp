#include <iostream>

using namespace std;

// Used for structured data
struct Person {
  string name;
  int age;
  double height;
};

class PersonModel {
public:
  string name;

private:
  int age = 0;
  double height = 0.0; // C++11 initialization

public:
  PersonModel();
  PersonModel(string n, int a, double h);

  // C++11 style constructor
  PersonModel(string n, int a) : name(n), age(a), height(0) {}

  // Public Method
  void information();

private:
  // private method
  void hiddenInformation();
};


int main()
{
    cout << "Hello world!" << endl;

    // Using a struct
    Person user;
    user.name = "Person1";
    user.age = 12;
    user.height = 6.3;
    cout << user.name << endl;

    Person user2 = {"Person2", 40, 5.5};

    //Using classes
    PersonModel person;
    person.name = "PersonModelName";
    person.information();
    // person.hiddenInformation(); // Cannot be accessed here

    // With constructors
    PersonModel githubUser("coder137", 23, 6.3);
    githubUser.information();

    return 0;
}

void PersonModel::information() {
  cout << "Name : " << name << endl;
  hiddenInformation();
}

void PersonModel::hiddenInformation() {
  cout << "Age : " << age << endl;
}

// Constructor
PersonModel::PersonModel(string n, int a, double h) {
  name = n;
  age = a;
  height = h;
}

PersonModel::PersonModel() {
  // Empty constructor
  cout << "Empty Constructor" << endl;

  // OR Set default values
  // name = "";
  // age = 0;
  // height = 0.0;

  // OR Set default initialization values on variables
}
