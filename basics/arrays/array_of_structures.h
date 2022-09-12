#include <iostream>
using namespace std;

struct Customer
{
  int id;
  string name;
};

void print_customers(Customer customers[], size_t collection_size);