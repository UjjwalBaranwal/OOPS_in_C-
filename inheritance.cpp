#include <iostream>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    Person()
    {
        cout << "This is the parent Constructor" << endl;
    }
    ~Person()
    {
        cout << "Destructor of the Parent Class" << endl;
    }
};
class Student : public Person
{
public:
    int rollNo;
    Student()
    {
        cout << "This is the child constructor" << endl;
    }
    Student(string name, int age, int rollNo) : Person(name, age)
    {
        this->rollNo = rollNo;
    }
    void getInfo()
    {
        cout << "Name : " << this->name << endl;
        cout << "Age : " << this->age << endl;
        cout << "Roll : " << this->rollNo << endl;
    }
    ~Student()
    {
        cout << "Destructor of the Child  Class" << endl;
    }
};
/*
Note -:
1) always the constructor of parent called then the constructor of the child called
2) and in the case of destructor always the destructor of the child called first then the destructor of the parent called
*/
int main()
{
    Student s1;
    s1.age = 2;
    s1.name = "ujjwa";
    s1.rollNo = 10;

    s1.getInfo();

    Student s2("Ujjwal", 10, 2);
    s2.getInfo();
    return 0;
}