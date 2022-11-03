#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

// Generate numbers (from 1-100).
// Print number of occurrences of each number.
int main()
{
  const int DIFFERENT_NUMBERS = 100;

  // Prompt and read number of games
  int totalNumbers;
  cout << "How many numbers to generate?: ";
  cin >> totalNumbers;

  vector<int> numbers(DIFFERENT_NUMBERS + 1);

  // Initialize the vector with zeroes.
  for (int i = 0; i < numbers.size(); i++)
    numbers[i] = 0;

  // Generate the numbers.
  for (int i = 0; i < totalNumbers; i++)
    numbers[rand() % DIFFERENT_NUMBERS + 1]++;

  // Output the summary.
  for (int i = 0; i < DIFFERENT_NUMBERS; i++)
    cout << i << " occurs " << numbers[i] << " time(s)."
         << endl;
  ;
}
