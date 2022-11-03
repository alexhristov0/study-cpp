#include <iostream>
using namespace std;

#include "node.h"
#include "queue.h"

int main()
{
  Queue<int> q1;
  if (!q1.empty())
    cout << "no items in queue = " << q1.get() << endl;

  q1.put(1);
  q1.put(2);

  if (!q1.empty())
    cout << "first = " << q1.get() << endl;
  if (!q1.empty())
    cout << "second = " << q1.get() << endl;
  if (!q1.empty())
    cout << "third = " << q1.get() << endl;

  Queue<string> q2;
  if (!q2.empty())
    cout << "no items in queue = " << q2.get() << endl;

  q2.put("First item in queue");
  q2.put("Second item in queue");

  if (!q2.empty())
    cout << "first = " << q2.get() << endl;
  if (!q2.empty())
    cout << "second = " << q2.get() << endl;
  if (!q2.empty())
    cout << "third = " << q2.get() << endl;

  return 0;
}
