#include <iostream>
#include "node.h"

using namespace std;

void headInsert(NodePtr& head, int value);

void deepPrintNode(const NodePtr& head);

int main()
{
    cout << "Hello world!" << endl;

    NodePtr head, tmp;
    head = new Node(100, NULL);

    for(int i=0;i<10;i++) {
      headInsert(head, i);
    }
    deepPrintNode(head);

    // Delete all nodes in the list before exiting the program
    tmp = head;
    while(tmp != nullptr) {
      NodePtr nodeToDelete = tmp;
      tmp = tmp->getLink();
      delete nodeToDelete;
    }

    return 0;
}

void headInsert(NodePtr& head, int value) {
  NodePtr tempNode = new Node;
  tempNode->setValue(value);
  tempNode->setLink(head);

  head = tempNode;
}


void deepPrintNode(const NodePtr& head) {
  NodePtr iter;
    for(iter=head;iter!=NULL; iter = iter->getLink()) {
        cout << iter->getValue() << endl;
    }
}
