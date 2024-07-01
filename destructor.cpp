#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    double *cgpaPtr;
    Student(string name, double cgpa)
    {
        cout << "Constructor is initiated" << endl;
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    void getInfo()
    {
        cout << "Name : " << this->name << endl;
        cout << "CGPA : " << *cgpaPtr << endl;
    }
    ~Student()
    {
        cout << "hey i am a destructor, I am come when block end where the Constructor is initiated" << endl;
        delete cgpaPtr; // deleting the refrence memory
    }
};
int main()
{

    Student s1("Ujjwal", 8.89);
    s1.getInfo();
    return 0;
}