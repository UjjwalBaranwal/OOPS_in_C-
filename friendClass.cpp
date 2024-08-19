#include <iostream>
using namespace std;
class EquiTri
{
private:
    float a;
    float area;
    float circum;

public:
    void setA(float a)
    {
        this->a = a;
        this->area = (1.73 * a * a) / 4;
    }
    friend class Homework;
    // here we making the class Homework a Friend Class so that it now can access the private member of this Class
};
class Homework
{
public:
    void giveDetail(EquiTri et)
    {
        cout << "Area : " << et.area << endl;
        cout << "Circumference : " << et.circum << endl;
    }
};
int main()
{
    EquiTri Et;
    Et.setA(2);
    Homework h;
    h.giveDetail(Et);
    return 0;
}
// notes :
/*
    1) in coding friendship is  not mutual its mean that the friend class can access the public and private member of the class where it declare but its vice versa is not true

    2) Friendship is not inherited
 */