#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    double *cgpaPtr;
    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    // this copy constructor hanndling tthe deep copy of the constructor
    Student(Student &obj)
    {
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }
    void getInfo()
    {
        cout << "Name : " << this->name << endl;
        cout << "CGPA : " << *cgpaPtr << endl;
    }
};
int main()
{
    /* Student s1("Ujjwal", 8.89);
    s1.getInfo();
    Student s2(s1);
    *s2.cgpaPtr = 10;
    s1.getInfo(); // here changing the value of s2 will affect the the value of the s1 because predefined Copy constructor cant handle the heap memory allocation it just the address of the pointed memory so currently s1 and s2 cgpaPtr are same so when its cgpaPtr is access the value of the data block pointed by cgpa pointer is changing which reflecting in both s1 and s2 */

    // now after creating the user defined Copy constructor handling the deep copy

    Student s1("Ujjwal", 8.89);
    s1.getInfo();
    Student s2(s1);
    *s2.cgpaPtr = 10;
    s1.getInfo();
    return 0;
}