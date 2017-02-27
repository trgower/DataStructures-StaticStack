/*

  Tanner Gower
  10/1/2016
  Project 3: Static Stack

*/

#include <iostream>
#include <cstdlib>
#include "StudentStack.h"

using namespace std;

StudentStack::StudentStack(int stackSize)
{
  stackArr = new Student[stackSize];
  size = stackSize;
  top = -1; // no top yet
}

StudentStack::StudentStack(const StudentStack &rhs)
{
  delete [] stackArr;

  if (rhs.size == 0)
    stackArr = NULL;
  else
    stackArr = new Student[rhs.size];

  size = rhs.size;

  for (int i = 0; i < rhs.size; i++)
    stackArr[i] = rhs.stackArr[i];

  top = rhs.top;
}

StudentStack::~StudentStack()
{
  delete [] stackArr;
}

void StudentStack::push(Student s)
{
  if (isFull()) {
    cout << "Stack is full!" << endl;
  } else {
    stackArr[++top] = s;
  }
}

Student StudentStack::pop()
{
  Student r;
  if (isEmpty()) {
    cout << "Stack is empty!" << endl;
  } else {
    r = stackArr[top--];
  }
  return r;
}

bool StudentStack::isFull() const
{
  return top == (size - 1);
}

bool StudentStack::isEmpty() const
{
  return top == -1;
}
