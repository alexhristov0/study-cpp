#ifndef NODE_H
#define NODE_H

template <typename Item>
struct Node
{
  Node(Item x);
  Item item;
  Node *next;
};

#include "node.tpp"

#endif // NODE_H
