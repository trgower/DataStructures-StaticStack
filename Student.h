/*

  Tanner Gower
  10/1/2016
  Project 3: Static Stack

*/

#ifndef STUDENT_H
#define STUDENT_H

class Student
{

  private:
    int id;
    std::string name;
    std::string address;
    int* grades;
    double gpa;

  public:
    Student();
    ~Student();

    void setId(int);
    void setName(std::string);
    void setAddress(std::string);
    void setGpa(double);

    int getId();
    std::string getName();
    std::string getAddress();
    double getGpa();
    std::string toString();

};

#endif
