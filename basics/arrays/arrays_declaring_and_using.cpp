/*
  Theme: Arrays
  Description: Declaring and using arrays
*/

#include <iostream>
using namespace std;

// Demo: The array elements are stored contiguous locations
//
// If arr[0] is stored at address x, then arr[1] is stored at x + sizeof(int)
// arr[2] is stored at x + sizeof(int) + sizeof(int) and so on.
//
void demo_elements_are_stored_in_continuous_location()
{
  cout << "Demo: Elements are stored in continuous location"
       << endl;

  int arr[5], i;

  cout << "Size of integer in this compiler is "
       << sizeof(int) << endl;
  // Output: Size of integer in this compiler is 4

  for (i = 0; i < 5; i++)
    // The use of '&' before a variable name, yields
    // address of variable.
    cout << "Address arr[" << i << "] is " << &arr[i]
         << endl;
  // Output: Address arr[1] is 0x273f9ffc64 ...
}

// Increments element in array
void increment(int arr[], int pos)
{
  // Note: there is no boundary check
  arr[pos]++;
}

// Demo: Arrays are always passed by reference
void demo_arrays_are_passed_by_reference()
{
  cout << "Demo: Arrays are passed by reference"
       << endl;

  int arr[5] = {
      1,
      2,
      3,
  },
      i;

  cout << "Current array is: ";
  for (i = 0; i < 5; i++)
    cout << arr[i] << " ";
  cout << endl;
  // Output: Current array is: 1 2 3 0 0

  increment(arr, 0);

  cout << "Current array is: ";
  for (i = 0; i < 5; i++)
    cout << arr[i] << " ";
  cout << endl;
  // Output: Current array is: 2 2 3 0 0

  // Note: There is no boundary check
  increment(arr, -5);

  cout << "Current array is: ";
  for (i = 0; i < 5; i++)
    cout << arr[i] << " ";
  cout << endl;
  // Output: Current array is: 2 2 3 0 0

  // Note: There is no boundary check
  cout << "Element at index -5 is: " << arr[-5];
  cout << endl;
  // Output: Element at index -5 is: 32764
}

int main()
{
  demo_elements_are_stored_in_continuous_location();
  demo_arrays_are_passed_by_reference();
  return 0;
}
