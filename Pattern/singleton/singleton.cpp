#include "singleton.h"

// ? added just for debugging, should not be present
#include <iostream>

namespace io
{
using std::cout;
using std::endl;
} // namespace io

using namespace io; // safer

// Set global to nullptr (initialized)
Singleton *Singleton::p_i = nullptr;

Singleton *Singleton::get()
{
  if (p_i == nullptr)
  {
    cout << "p_i is NULL, Creating singleton" << endl;
    p_i = new Singleton();
  }

  return p_i;
}

void Singleton::printInputData(int data)
{
  cout << "Input data is: " << data * data << endl;
}
