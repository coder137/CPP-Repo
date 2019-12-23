/**
 * Shared Pointer Basic usage
 * * Creation
 * - make_shared
 * 
 * * Copy
 * - copy constructor
 * - assignment
 * 
 * * Operations
 * - shared_ptr.unique()
 * - shared_ptr.use_count()
 * - shared_ptr.reset() // we can also create a new object and attach it to this object
 * 
 * Detailed Reference
 * http://www.cplusplus.com/reference/memory/shared_ptr/
 * 
 * Detailed example
 * https://docs.microsoft.com/en-us/cpp/cpp/how-to-create-and-use-shared-ptr-instances?view=vs-2019
 * 
 */
#include <iostream>
#include <memory>

using namespace std;

int main()
{
  shared_ptr<string> s_ptr_original = make_shared<string>("Hello World from Shared Pointer");
  cout << *s_ptr_original << endl;
  cout << "isUnique: " << s_ptr_original.unique() << endl;

  // Give reference
  shared_ptr<string> s_ptr_take_copy(s_ptr_original);
  shared_ptr<string> s_ptr_assignment = s_ptr_original; // NOTE, Can also take from s_ptr_take_copy

  cout << "s_ptr_original: " << *s_ptr_original << endl;
  cout << "s_ptr_take_copy: " << *s_ptr_take_copy << endl;
  cout << "s_ptr_assignment: " << *s_ptr_assignment << endl;

  cout << "isUnique: " << s_ptr_original.unique() << endl;
  cout << "getCount: " << s_ptr_original.use_count() << endl; // Get owners

  // Remove reference
  cout << "Resetting the s_ptr_assignment pointer reference" << endl;
  s_ptr_assignment.reset();
  if (s_ptr_assignment == nullptr)
  {
    cout << "s_ptr_assignment is nullptr" << endl;
  }

  cout << "getCount: " << s_ptr_original.use_count() << endl; // Get owners

  return 0;
}
