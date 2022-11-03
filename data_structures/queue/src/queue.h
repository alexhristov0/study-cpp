#include "node.h"

#ifndef QUEUE_H
#define QUEUE_H

template <typename Item>
class Queue
{
private:
  typedef Node<Item> *link;
  link head, tail;

public:
  Queue();
  int empty();
  void put(Item);
  Item get();
};

#include "queue.tpp"

#endif // QUEUE_H