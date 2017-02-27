/*

  Tanner Gower
  10/1/2016
  Project 3: Static Stack

*/

#ifndef STUDENTSTACK_H
#define STUDENTSTACK_H

#include "Student.h"

class StudentStack
{
  private:
    Student* stackArr;
    int size;
    int top;

  public:
    StudentStack(int);
    StudentStack(const StudentStack&);
    ~StudentStack();

    void push(Student);
    Student pop();
    bool isFull() const;
    bool isEmpty() const;
};

#endif // STUDENTSTACK_H
