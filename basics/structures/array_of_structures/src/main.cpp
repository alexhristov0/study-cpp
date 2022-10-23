#include <iostream>

#include "include/customer.h"
#include "include/customer_utilities.h"

using namespace std;

void demo_array_of_structures()
{
  cout << "Demo: Array of  structures"
       << endl;
  Customer customers[] = {{25, "Bob Jones"},
                          {26, "Jim Smith"}};

  size_t len = sizeof(customers) / sizeof(customers[0]);

  print_customers(customers, len);
}

int main()
{
  demo_array_of_structures();
  return 0;
}
