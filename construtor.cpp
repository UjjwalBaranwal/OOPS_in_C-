#include <iostream>
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
    // constructor
    // Non-parameterised constructor
    Teacher()
    {
        cout << "This is the constructor" << endl;
        // setting that if the Teacher class is initiated than the dept of every teacher is CSE.
        dept = "CSE";
    }
    // parameterised constructor
    /* Teacher(string n, string d, string s, double sal)
    {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    } */
    // declaring the constructor using this pointer
    Teacher(string name, string dept, string subject, double salary)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
    // copy constructor
    Teacher(Teacher &obj)
    {
        cout << "I am a Copy Constructor" << endl;
        this->name = obj.name;
        this->dept = obj.dept;
        this->subject = obj.subject;
        this->salary = obj.salary;
    }
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
    void getInfo()
    {
        cout << "Name : " << name << endl;
        cout << "Dept : " << dept << endl;
        cout << "Subject : " << subject << endl;
        cout << "Salary : " << salary << endl;
    }
};
int main()
{
    Teacher t1; // constructor call
    t1.name = "ujjwal";
    // t1.dept = "cse";
    t1.subject = "cpp";
    /* // t1.salary = 10000; // we cant access here beacuse salary is private
    t1.setSalary(1000);
    cout << t1.getSalary() << endl; */
    cout << t1.dept << endl;
    cout << t1.name << endl;

    Teacher t2("uj", "CSE", "oops", 5000);
    t2.getInfo();

    // using the copy constructor
    Teacher t3(t2); // here we passing the whole object as a parameter
    cout << "getting info of t3 Teacher object " << endl;
    t3.getInfo();
    return 0;
}