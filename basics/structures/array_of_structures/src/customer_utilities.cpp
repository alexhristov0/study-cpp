#include <iostream>

#include "include/customer.h"
#include "include/customer_utilities.h"

void print_customers(Customer customers[], size_t collection_size)
{
  cout << "This is the list of customers"
       << endl;

  for (size_t i{}; i < collection_size; i++)
  {
    cout << "[" << i + 1 << "] "
         << customers[i].to_string()
         << endl;
  }
}
