#pragma once

#include <iostream>

struct QueueNode {
  char data;
  QueueNode *link;
};

typedef QueueNode* QueueNodePtr;

class Queue {

public:
  Queue();

  Queue(const Queue& aQueue);

  ~Queue();

  void add(char item);
  char remove();

  bool empty() const;

private:
  QueueNodePtr front; // Removed from here
  QueueNodePtr back; // Added from here

};
