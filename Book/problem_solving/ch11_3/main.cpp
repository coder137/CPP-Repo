#include <iostream>
#include <cstring>

using namespace std;

class Vector2D {

private:
  char * note;

public:
  int x;
  int y;

  Vector2D() {}
  Vector2D(int x, int y) : x(x), y(y) {}

  void setXY(int x, int y) {
    this->x = x;
    this->y = y;
  }

  void info() {
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "-------" << endl;
  }

  // Destructor
  ~Vector2D() {
    cout << "Deleting Vector" << endl;
    delete [] note;
  }

  // Adds a note dynamically to the project
  void add_note(const char data[]) {
    note = new char[strlen(data) + 1];
    strcpy(note, data);
  }

  void print_note() {
    cout << note << endl;
    printf("%p\n", note);
  }

  // Copy Constructor
  // Deep copy when pointers are involved
  Vector2D(Vector2D& v) {
    x = v.x;
    y = v.y;
    note = new char[strlen(v.note) + 1];
    strcpy(note, v.note);
  }

  // Deep copy by operator overloading
  void operator =(Vector2D& rightSide) {
    x = rightSide.x;
    y = rightSide.y;
    note = new char[strlen(rightSide.note) + 1];
    strcpy(note, rightSide.note);
  }

};

void printArrayVector(Vector2D arr[], int num);

int main()
{
    cout << "Hello world!" << endl;

    // Classes and Arrays
    int i=0;
    Vector2D vectors[5];
    for(Vector2D& v : vectors) {
        // v.x = i;
        // v.y = i;
        v.setXY(i, i);
        i++;
    }
    printArrayVector(vectors, 5);

    // Classes and dynamic arrays
    vectors[0].add_note("Hello World");
    vectors[0].print_note();

    // Testing copy constructor
    // The address will be different
    Vector2D copyVector(vectors[0]);
    copyVector.print_note();

    // Testing = assignment operator overloading
    Vector2D overloadedVector;
    overloadedVector = vectors[0];
    overloadedVector.print_note();

    return 0;
}

void printArrayVector(Vector2D arr[], int num) {
  for(int i=0;i<num;i++) {
    arr[i].info();
  }
}
