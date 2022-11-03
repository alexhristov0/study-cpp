#include "node.h"

template <typename Item>
Queue<Item>::Queue()
{
  this->head = 0;
}

template <typename Item>
int Queue<Item>::empty()
{
  return this->head == 0;
}

template <typename Item>
void Queue<Item>::put(Item x)
{
  link t = this->tail;
  this->tail = new Node(x);
  if (this->head == 0)
  {
    this->head = this->tail;
  }
  else
  {
    t->next = tail;
  }
}

template <class Item>
Item Queue<Item>::get()
{
  Item v = head->item;
  link t = head->next;
  delete head;
  head = t;
  return v;
}
