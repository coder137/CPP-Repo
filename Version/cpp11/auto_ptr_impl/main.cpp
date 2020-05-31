#include <iostream>
#include "custom_auto_ptr.h"

#include <string.h>

using namespace std;

int main()
{
  cout << "Starting `custom_auto_ptr`" << endl;

  {
    custom_auto_ptr<string> a_s(new string("Hello `custom_auto_ptr`"));
    cout << "Length: " << a_s->length() << endl;
    cout << *a_s << endl;
  }

  cout << "Out of scope" << endl;

  return 0;
}
