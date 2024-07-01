#include <iostream>
#include <string>
using namespace std;
class Teacher
{
private:
    double salary;

public:
    // properties // attribute
    string name;
    string dept;
    string subject;
    // method

    void changeDept(string newDept)
    {
        dept = newDept;
    }
    // making getter and setter of the salary value
    void setSalary(double s)
    {
        salary = s;
    }
    double getSalary()
    {
        return salary;
    }
};
int main()
{
    Teacher t1;
    t1.name = "ujjwal";
    t1.dept = "cse";
    t1.subject = "cpp";
    // t1.salary = 10000; // we cant access here beacuse salary is private
    t1.setSalary(1000);
    cout << t1.getSalary() << endl;
    cout << t1.name << endl;
    return 0;
}