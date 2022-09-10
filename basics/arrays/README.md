# Arrays

Arrays are linear data structures:

- It is a group of variables of similar data types referred to by a single element.
- Its elements are stored in a contiguous memory location.
- The size of the array should be mentioned while declaring it.
- Array elements are always counted from zero (0) onward.
- Array elements can be accessed using the position of the element in the array.
- The array can have one or more dimensions.
- The array name indicates the address of the first element
- Arrays are always passed as pointers

Advantages:

- Code Optimization:  we can retrieve or sort the data efficiently.
- Random access: We can get any data located at an index position.

Disadvantages:

- Fixed number of elements: We can store only the fixed size of elements in the array. It doesn’t grow its size at runtime.
- Insertion and deletion of elements can be costly since the elements are needed to be managed in accordance with the new memory allocation.

Facts about arrays in C++:

- No Index Out of bound Checking

```c++
// C++ program to demonstrate index out of bound not checked.

#include <iostream>
using namespace std;

int main()
{
    int arr[2];

    // Index out of bound not checked.
    cout << arr[3] << " ";
    cout << arr[-2] << " ";

    // Can initialize with more elements than specified size.
    int arr2[2] = { 10, 20, 30, 40, 50 };

    return 0;
}
```

- Elements are stored at contiguous memory locations

```c++
// C++ program to demonstrate that array elements
// are stored contiguous locations

#include <iostream>
using namespace std;

int main()
{
    // If arr[0] is stored at address x, then
    // arr[1] is stored at x + sizeof(int)
    // arr[2] is stored at x + sizeof(int) + sizeof(int)
    // and so on.
    int arr[5], i;

    cout << "Size of integer in this compiler is "
         << sizeof(int) << "\n";

    for (i = 0; i < 5; i++)
        // The use of '&' before a variable name, yields
        // address of variable.
        cout << "Address arr[" << i << "] is " << &arr[i]
             << "\n";

    return 0;
}
```

References:

[Arrays in C/C++](https://www.geeksforgeeks.org/arrays-in-c-cpp/)
