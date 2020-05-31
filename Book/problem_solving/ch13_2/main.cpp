#include <iostream>
#include "stack.h"
#include "queue.h"

using namespace std;

void stack_example();
void queue_example();

// NOTE, Added a bunch of debug(cout) statements in the Stack and Queue class
int main()
{
  cout << "Hello world!" << endl;

  // Stack is First In - Last Out
  cout << "Stack Example" << endl;
  stack_example();
  cout << "DONE" << endl;

  // Queue is First In - First Out
  cout << "Queue Example" << endl;
  queue_example();
  cout << "DONE" << endl;

  return 0;
}


void queue_example() {
  Queue qu;

  qu.add('A');
  qu.add('B');

  // Queue by copy
  Queue newQueue(qu);
  newQueue.add('Z');

  // Check addresses
  printf("%p %x\n", &qu, &qu);
  printf("%p %x\n", &newQueue, &newQueue);

  // Remove from queue
  cout << qu.remove() << endl;
  cout << qu.remove() << endl;

  bool isEmpty = qu.remove() == -1;
  cout << isEmpty << endl;
}

void stack_example() {
  Stack st;
  st.push('A');
  st.push('B');
  st.deepPrint(cout);
  cout << "-------" << endl;

  // Stack by copy
  Stack newStack(st);

  // Check the addresses
  printf("%p %x\n", &newStack, &newStack);
  printf("%p %x\n", &st, &st);

  newStack.push('Z');
  newStack.deepPrint(cout);
  cout << "-------" << endl;

  // Pop from stack
  cout << st.pop() << endl;
  cout << st.pop() << endl;
  bool data = st.pop() == -1;
  cout << data << endl;
  cout << "-------" << endl;
}
