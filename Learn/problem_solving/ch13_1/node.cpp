#include <iostream>
#include "node.h"

Node::Node() : data(0), link(NULL) {}
Node::Node(int value, Node* next) : data(value), link(next) {}

int Node::getValue() const {
  return this->data;
}
Node* Node::getLink() const {
  return this->link;
}

void Node::setValue(int value) {
  this->data = value;
}
void Node::setLink(Node *next) {
  this->link = next;
}
