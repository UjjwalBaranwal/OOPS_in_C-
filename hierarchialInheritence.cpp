#include <iostream>
using namespace std;
class Person
{
public:
    string name;
    int age;
};
class Student : public Person
{
public:
    int rollNo;
};
class Teacher : public Person
{
public:
    string subject;
};

// here hierchial inheritence is happening because Student and Teacher are inherited from the common Parent Class

int main()
{

    return 0;
}