/**
 * Date: 24.11.19
 * 
 * If we run this example, we can see that `"p_i is NULL, Creating singleton"` statement only runs once
 * 
 * When we get reference the second time we basically use the existing object
 */
#include <iostream>

#include "singleton.h"

using namespace std;

int main()
{

  cout << "Hello World" << endl;

  Singleton *single = Singleton::get();
  single->printInputData(10);

  Singleton *get_ref = Singleton::get();
  get_ref->printInputData(11);

  return 0;
}
