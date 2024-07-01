#include <iostream>
#include <climits>
using namespace std;
class Student
{
public:
    string name;
    int rollNo;
};
class Teacher
{
public:
    string subject;
    int salary;
};
// here TA class is multi inherited class as it herited from the Student as well as Teacher class
class TA : public Student, public Teacher
{
public:
    void getInfo()
    {
        cout << "Name : " << name << endl;
        cout << "Roll : " << rollNo << endl;
        cout << "Subject : " << subject << endl;
        cout << "Salary : " << salary << endl;
    }
};
int main()
{
    TA ta;
    ta.name = "Tony Stark";
    ta.rollNo = 1;
    ta.subject = "save to world";
    ta.salary = INT_MAX;
    ta.getInfo();
    return 0;
}