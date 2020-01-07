/**
 * Date: 06.01.2020
 * Author: Niket Naidu
 * 
 * unordered_map -> dictionary that does not contain any order to its element storage
 * http://www.cplusplus.com/reference/unordered_map/unordered_map/
 * 
 * #constructor
 * #functions
 * - empty
 * - size
 * - count
 * - []
 * - at
 * 
 * #iterator
 * - begin
 * - end
 * 
 * #modifiers
 * - insert
 * - erase
 * - clear
 * 
 * ! Undefined behaviour observed when using [] operator on missing element
 * * NOTE, Always use `at` function wherever possible
 */
#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
  unordered_map<string, int> umap;

  cout << "maxSize: " << umap.max_size() << endl;
  cout << "isEmpty: " << umap.empty() << endl;

  umap["Hello"] = 5;
  umap["World"] = 5;
  umap["What"] = 4;
  umap.insert({"Test", 4});
  umap.insert({"Two", 3});

  cout << "maxSize: " << umap.max_size() << endl;
  cout << "isEmpty: " << umap.empty() << endl;

  cout << "Size: " << umap.size() << endl;
  cout << "Count: " << umap.count("hello") << endl;

  cout << umap["Hello"] << endl;
  try
  {
    cout << umap.at("hello") << endl;
  }
  catch (out_of_range)
  {
    cout << "out of range when calling 'hello'" << endl;
  }

  // Iterator
  for (auto iter = umap.begin(); iter != umap.end(); iter++)
  {
    cout << iter->first << "\t:\t" << iter->second << endl;
  }

  cout << "END" << endl
       << endl;
  /**
   * ! UNDEFINED BEHAVIOUR
   */

  cout << "This is the example for 'UNDEFINED BEHAVIOUR'" << endl;

  cout << umap["hello"] << endl; // Undefined behaviour + increases the size by 1
  cout << "Size: " << umap.size() << endl;

  try
  {
    cout << umap.at("hello") << endl; // this not longer throws an error
  }
  catch (out_of_range)
  {
    cout << "out of range when calling 'hello'" << endl;
  }

  return 0;
}
