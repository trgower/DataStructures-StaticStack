/*

  Tanner Gower
  10/1/2016
  Project 3: Static Stack

*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "StudentStack.h"

using namespace std;

const int kNumStudents = 15;

int main ()
{
  StudentStack stack(kNumStudents);

  srand(time(0));
  Student students[kNumStudents];
  cout << "----------ARRAY ELEMENTS----------" << endl;
  for (int i = 0; i < kNumStudents; i++) {
    cout << "[" << i << "] " << students[i].toString() << endl;
    stack.push(students[i]);
  }
  cout << endl;

  // We don't save the popped elements because we don't need them
  cout << "----------POPPED ELEMENTS----------" << endl;
  cout << stack.pop().toString() << endl;
  cout << stack.pop().toString() << endl;
  cout << stack.pop().toString() << endl;
  cout << stack.pop().toString() << endl;
  cout << stack.pop().toString() << endl;
  cout << endl;

  cout << "----------POPPING REMAINING ELEMENTS----------" << endl;
  while (!stack.isEmpty())
    cout << stack.pop().toString() << endl;

  return 0;
}
