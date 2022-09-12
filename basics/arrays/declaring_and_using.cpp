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

// Demo: Declare and initialize at the same time.
//       Get the size of the array.
//       Loop using iterator.
//
void demo_declare_initialize_size_iterate()
{
  cout << "Demo: Declare, initialize, size, loop"
       << endl;

  // Note: You can omit the size in array declaration.
  double arr[]{22.5, 23.7, 24.12, 33.55, 16.17};
  size_t len = sizeof(arr) / sizeof(arr[0]);

  // Note: `size_t i{}` is same as `size_t i{0}`
  cout << "Current array is: ";
  for (size_t i{}; i < len; i++)
    cout << arr[i] << " ";
  cout << endl;
  // Output: Current array is: 22.5 23.7 24.12 33.55 16.17

  // Note: Use iterator to loop the array.
  cout << "Current array is: ";
  for (auto val : arr)
    cout << val << " ";
  cout << endl;
  // Output: Current array is: 22.5 23.7 24.12 33.55 16.17
}

// Demo: Array as a constant
//
void demo_array_constant()
{
  cout << "Demo: Array as a constant"
       << endl;

  const int scores[] = {5, 5, 3};

  // Error: compiler error "error: assignment of read-only location 'scores[0]'"
  // scores[0] = 6;

  int sum{0};
  for (auto score : scores)
    sum += score;

  cout << "Sum of scores: " << sum;
}

int main()
{
  demo_elements_are_stored_in_continuous_location();
  demo_arrays_are_passed_by_reference();
  demo_declare_initialize_size_iterate();
  demo_array_constant();
  return 0;
}
