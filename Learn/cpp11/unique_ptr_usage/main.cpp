/**
 * This is a Basic Usage of Unique Pointers
 * 
 * More Indepth Usage with vectors, classes and Arrays can be read here
 * https://docs.microsoft.com/en-us/cpp/cpp/how-to-create-and-use-unique-ptr-instances?view=vs-2019
 * 
 */
#include <iostream>
#include <memory>

using namespace std;

int main()
{
  cout << "Hello World" << endl;

  // Make a unique pointer
  unique_ptr<string> u_ptr = make_unique<string>("Hello `unique_ptr`");
  cout << *u_ptr << endl;

  // Move it to a different unique_ptr
  unique_ptr<string> m_ptr = move(u_ptr);

  // ! Will cause Segmentation fault
  // cout << "Old Pointer: " << *u_ptr << endl;
  cout << "New Pointer: " << *m_ptr << endl;
  cout << "Length: " << m_ptr->length() << endl;

  return 0;
}
