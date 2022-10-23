#include <iostream>
#include <stdio.h>

#include "include/customer.h"

using namespace std;

string Customer::to_string()
{
  char buffer[50];
  sprintf(buffer, "Customer: id=%d, name=%s", id, name.c_str());
  return buffer;
}
