/**
 * priority_queue means everything is sorted from largest to smallest when we push it to the queue
 * priority_queue is built using a heap but functions more like a queue / stack (by pushing and pop)
 */
#include <iostream>
#include <queue>

using namespace std;

int main()
{
  cout << "Hello World" << endl;

  priority_queue<int> pq;
  pq.push(10);
  pq.push(20); // We get this out first -> largest to smallest
  pq.push(15);
  pq.push(5);

  cout << "Size: " << pq.size() << endl;

  while (!pq.empty())
  {
    cout << pq.top() << endl;
    pq.pop();
  }

  return 0;
}
