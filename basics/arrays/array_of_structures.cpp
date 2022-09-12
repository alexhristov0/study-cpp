#include <iostream>
#include "array_of_structures.h"
using namespace std;

void print_customers(Customer customers[], size_t collection_size)
{
  cout << "This is the list of customers"
       << endl;

  for (size_t i{}; i < collection_size; i++)
  {
    cout << "Customer " << i + 1
         << ": id=" + customers[i].id
         << ", name=" << customers[i].name
         << endl;
  }
}

int main()
{
  cout << "This is the list of customers"
       << endl;

  Customer customers[] = {{25, "Bob Jones"},
                          {26, "Jim Smith"}};

  size_t len = sizeof(customers) / sizeof(customers[0]);

  print_customers(customers, len);
  return 0;
}