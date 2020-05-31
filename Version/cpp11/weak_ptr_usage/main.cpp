/**
 * Weak Pointers are to be used in tangent with Shared Pointers
 * -> When we need a access to Shared Pointers without incrementing reference counter
 * -> Cyclic references
 * 
 * - Copy Constructor
 * - Assignment
 * 
 * - weak_ptr.lock()
 * 
 * 
 * Reference
 * http://www.cplusplus.com/reference/memory/weak_ptr/
 * http://www.cplusplus.com/reference/memory/weak_ptr/lock/
 * 
 * Advanced Example
 * https://docs.microsoft.com/en-us/cpp/cpp/how-to-create-and-use-weak-ptr-instances?view=vs-2019
 */
#include <iostream>
#include <memory>

using namespace std;

int main()
{
  shared_ptr<string> s_ptr_original = make_shared<string>("Hello World from Shared Pointer");
  cout << "checkCount: " << s_ptr_original.use_count() << endl;

  weak_ptr<string> w_ptr_copy_constructor(s_ptr_original);
  weak_ptr<string> w_ptr_assignment = s_ptr_original;

  // This increments the reference counter
  {
    shared_ptr<string> s_ptr_from_w_ptr = w_ptr_copy_constructor.lock();
    cout << *s_ptr_from_w_ptr << endl;
    cout << "checkCount: " << s_ptr_original.use_count() << endl;
  }
  // Decrements the reference counter

  cout << "checkCount: " << s_ptr_original.use_count() << endl;

  return 0;
}
