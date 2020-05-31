#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>

using namespace std;

struct Node
{
  int data;
  Node *link;
};

typedef Node *NodePtr;

void headInsert(NodePtr &head, int value)
{
  NodePtr temp = new Node;
  temp->data = value;

  temp->link = head;
  head = temp;
}

void insert(NodePtr afterNode, int value)
{
  NodePtr afterAfternode = afterNode->link;

  NodePtr newNode = new Node;
  newNode->data = value;
  newNode->link = afterAfternode;

  afterNode->link = newNode;
}

void remove(NodePtr afterNode)
{
  NodePtr removeNode = afterNode->link;
  afterNode->link = removeNode->link;
  delete removeNode;
}

void deepPrint(const NodePtr &head)
{
  for (NodePtr iter = head; iter != NULL; iter = iter->link)
  {
    cout << iter->data << "," << endl;
  }
}

#endif
