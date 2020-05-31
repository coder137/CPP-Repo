#include <iostream>

using namespace std;

struct Node
{
  int data;
  Node *next;
  Node *back;
};

typedef Node *NodePtr;

void insertHead(NodePtr &head, int data);
void insertNodeAfter(NodePtr &node, int data);
void insertNodeBefore(NodePtr &node, int data);

void getLastNode(NodePtr &head, NodePtr &getNode);

void deepPrintNodeForward(NodePtr &node);
void deepPrintNodeBackward(NodePtr &lastnode);

int main()
{
  cout << "Hello World" << endl;

  NodePtr head;
  head = new Node;
  head->data = 10;

  insertHead(head, 23);
  insertNodeAfter(head, 34);
  insertNodeBefore(head->next, 11);

  // ? debuggin
  // cout << "Node: " << head->next->data << endl;
  // cout << "NodeBefore: " << head->next->back->data << endl;
  // cout << "NodeAfter: " << head->next->next->data << endl;

  deepPrintNodeForward(head);

  NodePtr getNode = new Node;
  getLastNode(head, getNode);
  cout << getNode->data << endl;

  deepPrintNodeBackward(getNode);

  return 0;
}

void insertHead(NodePtr &head, int data)
{
  NodePtr newNode = new Node;
  newNode->data = data;

  newNode->next = head;
  head->back = newNode;
  head = newNode;
}

void insertNodeAfter(NodePtr &node, int data)
{
  NodePtr newNode = new Node;
  newNode->data = data;

  newNode->next = node->next;
  newNode->back = node;

  // node->next can be NULL
  if (node->next != NULL)
  {
    node->next->back = newNode;
  }

  node->next = newNode;
}

void insertNodeBefore(NodePtr &node, int data)
{
  // This means that this node is HEAD
  // TODO, Call insertHead
  if (node->back == NULL)
  {
    cerr << "Node is HEAD, Cannot insertNodeBefore this" << endl;
    return;
  }

  NodePtr newNode = new Node;
  newNode->data = data;

  newNode->next = node;
  newNode->back = node->back;
  newNode->back->next = newNode;
  newNode->next->back = newNode;

  // ! This doesnt work
  // node->back->next = newNode;
  // node->back = newNode;
}

/**
 * Value of getNode is lastnode
 */
void getLastNode(NodePtr &head, NodePtr &getNode)
{
  NodePtr iter;
  for (iter = head; iter != NULL; iter = iter->next)
  {
    // cout << iter->data << endl;
    getNode = iter;
  }
}

void deepPrintNodeForward(NodePtr &node)
{
  cout << "START: deepPrintNodeForward" << endl;
  NodePtr iter;
  for (iter = node; iter != NULL; iter = iter->next)
  {
    cout << iter->data << endl;
  }
  cout << "DONE: deepPrintNodeForward" << endl;
}

void deepPrintNodeBackward(NodePtr &lastnode)
{
  cout << "START: deepPrintNodeBackward" << endl;
  NodePtr iter;
  for (iter = lastnode; iter != NULL; iter = iter->back)
  {
    cout << iter->data << endl;
  }
  cout << "DONE: deepPrintNodeBackward" << endl;
}
