#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

void enterItemToPurchaseName(ItemToPurchase *item)
{
  // cin.clear();
  cout << "Enter the item name:" << endl;
  string name;
  getline(cin, name);
  item->SetName(name);
}

void enterItemToPurchasePrice(ItemToPurchase *item)
{
  cout << "Enter the item price:" << endl;
  int input;
  cin >> input;
  item->SetPrice(input);
}

void enterItemToPurchaseQuantity(ItemToPurchase *item)
{
  cout << "Enter the item quantity:" << endl;
  int input;
  cin >> input;
  item->SetQuantity(input);
}

void printItemToPurchase(ItemToPurchase *item)
{
  cout << item->GetName() << " "
       << item->GetQuantity() << " @ $"
       << item->GetPrice() << " = $"
       << item->GetQuantity() * item->GetPrice()
       << endl;
}

int main()
{

  ItemToPurchase item1, item2;

  cout << "Item 1" << endl;
  enterItemToPurchaseName(&item1);
  enterItemToPurchasePrice(&item1);
  enterItemToPurchaseQuantity(&item1);
  cout << endl;

  cin.ignore(); // clear the buffer off new line char (\n) from previous inputs

  cout << "Item 2" << endl;
  enterItemToPurchaseName(&item2);
  enterItemToPurchasePrice(&item2);
  enterItemToPurchaseQuantity(&item2);
  cout << endl;

  cout << "TOTAL COST" << endl;
  printItemToPurchase(&item1);
  printItemToPurchase(&item2);
  cout << endl;

  int total = item1.GetPrice() * item1.GetQuantity() + item2.GetPrice() * item2.GetQuantity();
  cout << "Total: $" << total << endl;

  return 0;
}
