#pragma once

#include <iostream>

struct StackFrame {
  char data;
  StackFrame  *link;
};

typedef StackFrame* StackFramePtr;

class Stack {

public:
  Stack();

  Stack(const Stack& aStack);

  ~Stack();

  void push(char symbol);
  char pop();

  bool empty() const;

  void deepPrint(std::ostream& out) {
    StackFramePtr iter;
    for(iter=top;iter != NULL;iter = iter->link) {
      out << "DeepPrint: " << iter->data << std::endl;
    }
  }

private:
  StackFramePtr top;
};
