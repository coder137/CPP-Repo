#include <iostream>

using namespace std;

// Node (Used in LinkedList)
struct Node
{
  int data;
  Node *link;
};

typedef Node *NodePtr;

void printNode(const Node &node);
void deepPrintNode(Node &node);

void headInsert(NodePtr &head, int theNumber);
NodePtr searchLinkedList(NodePtr head, int target);

void insertNode(NodePtr afterNode, int theNumber);
void removeNode(NodePtr afterNode);

int main()
{
  cout << "Hello world!" << endl;

  NodePtr head;
  head = new Node;
  head->data = 81;
  head->link = new Node;
  head->link->data = 17;
  head->link->link = NULL;

  // Using head insert
  headInsert(head, 12);
  headInsert(head, 15);
  headInsert(head, 45);
  deepPrintNode(*head);

  // Searching a LinkedList
  NodePtr ptr = searchLinkedList(head, 81);
  cout << ptr->data << endl;
  deepPrintNode(*ptr);

  // Pointers as Iterators
  // Works the same as deepPrint
  Node* iter;
  for(iter=head;iter!=NULL;iter=iter->link) {
    cout <<"PointerAsIterator: " << iter->data << endl;
  }

  // Inserting a Node
  cout << "Inserting a node after head (57)" << endl;
  insertNode(head, 57);
  deepPrintNode(*head);

  // Removing a Node
  cout << "Removing a node after head (57)" << endl;
  removeNode(head);
  deepPrintNode(*head);

  // Other types of linked lists (Page 794 onwards)
  // - Doubly Linked List
  // - Binary Tree

  delete head;
  return 0;
}

/// Page 790 for diagram
void insertNode(NodePtr afterNode, int theNumber) {

  // Save reference to the node after afterNode
  NodePtr removedNode = afterNode->link;

  // Create a new node
  NodePtr newNode = new Node;
  newNode->data = theNumber;
  newNode->link = removedNode; // Link to the removedNode

  // Add the newNode after afterNode
  afterNode->link = newNode;
}

/// Page 792 for diagram
void removeNode(NodePtr afterNode) {
  // Get reference to the node that needs to be removed
  NodePtr toRemoveNode = afterNode->link;

  // Link the memory
  afterNode->link = toRemoveNode->link;

  // Clean the memory
  delete toRemoveNode;
}

/// Page 785 for diagram
void headInsert(NodePtr &head, int theNumber)
{
  NodePtr tempPtr;
  tempPtr = new Node;

  tempPtr->data = theNumber;
  tempPtr->link = head;
  head = tempPtr;
}

/// Page 787 for diagram
NodePtr searchLinkedList(NodePtr head, int target) {
  NodePtr here = head;

  if(here == NULL) return NULL;
  else {
    while(1) {
        if (here->data == target) return here;
        if (here->link == NULL) return NULL;
        here = here->link; // move to the next link
    }
  }
}

// print data about a single node
void printNode(const Node &node)
{
  cout << "data: " << node.data << endl;
}

// Traverse down the tree and print the data
void deepPrintNode(Node &node) {
  cout << "DeepPrint: " << node.data << endl;
  NodePtr head = node.link;

  while(1) {
    cout << "DeepPrint: " << head->data << endl;
    if (head->link == nullptr) break;
    head = head->link;
  }
}
