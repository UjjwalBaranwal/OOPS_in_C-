#include <iostream>
using namespace std;
class Shape
{
    virtual void draw() = 0; // this is the pure Virtual function which made this Shape class a virtual class

    // we can not create a object out of the Shape (abstract) class
};
class Circle
{
public:
    void draw()
    {
        cout << "Drawing the circle" << endl;
    }
};
int main()
{
    Circle c;
    c.draw();
    return 0;
}