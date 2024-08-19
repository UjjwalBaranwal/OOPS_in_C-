#include <iostream>
using namespace std;
class Shape
{
    virtual void draw() = 0; // this is the pure Virtual function which made this Shape class a virtual class
    /*A pure virtual function, also known as an abstract function is a member function that doesn’t contain any statements.
    This function is defined in the derived class if needed.
     */
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