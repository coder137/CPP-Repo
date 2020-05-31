#pragma once

class Node {

public:
  Node();
  Node(int value, Node* next);

  int getValue() const;
  Node *getLink() const;

  void setValue(int value);
  void setLink(Node *next);

private:
  int data;
  Node *link;
};

typedef Node* NodePtr;
