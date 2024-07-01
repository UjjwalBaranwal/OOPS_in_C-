#include <iostream>
using namespace std;

// Constructor overloading
class Student
{
public:
    string name;

    Student()
    {
        cout << "This is the non-parameterised constructor" << endl;
    }

    Student(string name)
    {
        cout << "This is the parameterised constructor" << endl;
        this->name = name;
    }
};

// Function overloading
class Print
{
public:
    void print(int x)
    {
        cout << x << endl;
    }

    void print(char ch)
    {
        cout << ch << endl;
    }
};

// Base class with a virtual function
class Parent
{
public:
    virtual void printHello()
    {
        cout << "Hello from the parent" << endl;
    }
};

// Derived class overriding the virtual function
class Child : public Parent
{
public:
    void printHello() override
    {
        cout << "Hello from the child" << endl;
    }
};

int main()
{
    // Demonstrating constructor overloading
    Student s1;          // Calls non-parameterised constructor
    Student s2("Alice"); // Calls parameterised constructor

    // Demonstrating function overloading
    Print p1;
    p1.print(2);
    p1.print('e');

    // Demonstrating method overriding and polymorphism
    Child child;
    child.printHello(); // Calls overridden method in Child class

    return 0;
}
