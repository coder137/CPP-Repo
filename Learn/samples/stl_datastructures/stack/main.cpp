/**
 * Stack -> First In - Last Out
 * -> Last In -> First Out
 * 
 * - s.push
 * - s.pop
 * - s.empty
 * - s.top
 * - s.size
 * 
 * - swap (to swap 2 stacks)
 */
#include <iostream>
#include <stack>

using namespace std;

int main()
{
  stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50); // We start reading from here

  cout << "Size: " << s.size() << endl;

  while (!s.empty())
  {
    int value = s.top();
    cout << value << endl;
    s.pop();
  }

  return 0;
}
