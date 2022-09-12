/*
  Theme: Arrays
  Description: Remove duplicates

  Your are given an array of size collection_size, containing integers, potentially including duplicates. An example is

  int data[] {1,2,4,5,1,8,2,3,6,1,4,2};

  Your job is to write code that eliminates duplicates and print a message exactly like

  The collection contains 7 unique numbers, they are : 1 2 4 5 8 3 6

  with a single space after the last element, in this case, a space after the 6.
*/

#include <iostream>
#include "unique_numbers.h"
using namespace std;

void unique_numbers(int numbers[], size_t collection_size)
{
  cout << "Demo: Unique numbers"
       << endl;

  int unique_data[collection_size]; // Holds the unique elements
  size_t unique_counter{};          // Initialized to zero. Counts the elements
                                    // we have in the unique_data array

  for (size_t i{}; i < collection_size; ++i)
  {
    bool already_in{false};
    // See if  the element is not already in our unique_data
    for (size_t j{}; j < unique_counter; ++j)
    {
      // If we find that the element is already in our unique_data array,
      // we say that the element at current iteration is a duplicate and
      // break out of the loop
      if (unique_data[j] == numbers[i])
      {
        already_in = true;
        break;
      }
    }

    // If the element isn't already in, we put it in and increment the counter
    // Please understand the use of the postfix operator here.
    if (!already_in)
    {
      unique_data[unique_counter++] = numbers[i];
    }
  }

  cout << "The collection contains " << collection_size << " numbers, they are : ";
  for (unsigned int i{}; i < collection_size; ++i)
    cout << numbers[i] << " ";
  cout << endl;
  // Output: The collection contains 12 numbers, they are : 1 2 4 5 1 8 2 3 6 1 4 2

  cout << "The collection contains " << unique_counter << " unique numbers, they are : ";
  for (unsigned int i{}; i < unique_counter; ++i)
    cout << unique_data[i] << " ";
  cout << endl;
  // Output: The collection contains 7 unique numbers, they are : 1 2 4 5 8 3 6
}

int main()
{
  int arr[] = {1, 2, 4, 5, 1, 8, 2, 3, 6, 1, 4, 2};
  size_t len = sizeof(arr) / sizeof(arr[0]);

  unique_numbers(arr, len);
}
