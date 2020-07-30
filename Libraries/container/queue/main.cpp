#include <iostream>
#include <queue>

using namespace std;

int main()
{
  cout << "Hello World" << endl;

  queue<int> qInt;

  qInt.push(10);
  qInt.push(12);
  qInt.push(13);
  qInt.push(16);
  qInt.push(90);

  cout << qInt.size() << endl;
  cout << qInt.front() << endl; // 10
  cout << qInt.back() << endl;  // 16

  cout << "Read Queue till empty" << endl;
  while (!qInt.empty())
  {
    cout << qInt.front() << endl;
    qInt.pop();
  }

  cout << qInt.size() << endl;

  return 0;
}
