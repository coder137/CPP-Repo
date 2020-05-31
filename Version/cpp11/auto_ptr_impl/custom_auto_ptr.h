#pragma once

// ? used for debugging
#include <iostream>
using namespace std;
// END

template <class T>
class custom_auto_ptr
{
public:
  custom_auto_ptr(T *data) : data(data) {}
  ~custom_auto_ptr()
  {
    cout << "Automatically deleting `custom_auto_ptr`" << endl;
    delete data;
  }

  // Operator overloading
  // [IMP] If we use overloading with templates we need to use forward declaration
  // http://www.cplusplus.com/forum/beginner/89256/
  T &operator*() { return *data; }
  T *operator->() { return data; }

private:
  T *data;
};
