#include <iostream>

#include "stack.h"

Stack::Stack() : top(NULL) {}

Stack::Stack(const Stack& aStack) : top(NULL) {

  StackFramePtr iter;
  for(iter = aStack.top;iter != NULL; iter = iter->link) {
    this->push(iter->data);
  }
}

Stack::~Stack() {
  std::cout << "Deleting stack" << std::endl;
  char d;
  while(!empty()) {
    d = pop(); // Delete
    std::cout << "deleting: " << d << std::endl;
  }
}

void Stack::push(char symbol) {
  StackFramePtr temp = new StackFrame;
  temp->data = symbol;
  temp->link = top;

  top = temp;
}

char Stack::pop() {
  if (empty()) return 255;

  StackFramePtr temp = top;
  char ret = temp->data;
  top = top->link;

  delete temp;
  return ret;
}

bool Stack::empty() const {
  return top == NULL;
}
