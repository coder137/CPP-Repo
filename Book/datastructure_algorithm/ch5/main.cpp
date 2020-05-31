#include <iostream>

#include "linked_list.h"

using namespace std;

int main()
{
  cout << "Hello World" << endl;

  NodePtr head = new Node;
  headInsert(head, 10);
  headInsert(head, 12);
  headInsert(head, 14);

  insert(head, 167);
  insert(head, 169);

  remove(head);
  deepPrint(head);

  return 0;
}
