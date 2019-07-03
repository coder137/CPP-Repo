#include "queue.h"

Queue::Queue() : front(NULL), back(NULL) {}

Queue::Queue(const Queue& aQueue) : front(NULL), back(NULL) {
  QueueNodePtr iter;

  for(iter = aQueue.front; iter != NULL; iter = iter->link) {
    this->add(iter->data);
  }
}

Queue::~Queue() {
  std::cout << "Deleting Queue" << std::endl;
  char d;
  while(!empty()) {
    d = remove(); // Calls delete
    std::cout << "Deleted: " << d << std::endl;
  }
}

void Queue::add(char item) {

  if (empty()) {

    front = new QueueNode;
    front->data = item;
    front->link = NULL;
    back = front; // Front and back are the same

  } else {

    QueueNodePtr temp = new QueueNode;
    temp->data = item;
    temp->link = NULL;
    back->link = temp; // Creates a link between the previous node and the new incoming node
    back = temp; // Becomes the new node
  }
}

char Queue::remove() {
  if (empty()) return -1;

  char res = front->data;
  QueueNodePtr temp = front;
  front = front->link;

  // If we remove the last node
  if (front == NULL)
    back = NULL;

  delete temp;
  return res;
}

bool Queue::empty() const {
  return back == NULL;
}
