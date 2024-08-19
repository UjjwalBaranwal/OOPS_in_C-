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
    friend void giveDetail(EquiTri et);
    // here we making the giveDetail a Friend function so that it now can access the private member of this Class
};
void giveDetail(EquiTri et)
{
    cout << "Area : " << et.area << endl;
    cout << "Circumference : " << et.circum << endl;
}
int main()
{
    EquiTri Et;
    Et.setA(2);
    giveDetail(Et);
    return 0;
}