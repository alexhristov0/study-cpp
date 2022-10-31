template <typename Item>
Node<Item>::Node(Item x)
{
  this->item = x;
  this->next = 0;
}