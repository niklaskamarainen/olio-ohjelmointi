#include "student.h"
#include <iostream>

Student::Student(string n, int a) : Name(n), Age(a)
{

}

void Student::setAge(int a)
{
    Age = a;
}

void Student::setName(string n)
{
    Name = n;
}

string Student::getName() const
{
    return Name;
}

int Student::getAge() const
{
    return Age;
}

void Student::printStudentInfo() const
{
    cout<<"Student "<<getName()<<" Age "<<getAge()<<endl;
}
