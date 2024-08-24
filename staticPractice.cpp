#include <iostream>
using namespace std;
class Emp
{
    int id;
    static int count; // now this variable will be share between different object of this class

public:
    void setId(void)
    {
        cout << "insert the id" << endl;
        cin >> id;
        count++;
    }
    void getId(void)
    {
        cout << "the id is " << id << " its count is " << count << endl;
    }
    void getNum(void)
    {
        cout << "count is : " << count << endl;
    }
};
int Emp::count; // default value is zero
int main()
{
    Emp uj;
    Emp pj;
    Emp kj;
    uj.setId();
    uj.getId();
    pj.setId();
    pj.getId();
    kj.setId();
    kj.getId();
    return 0;
}