#include <iostream>
using namespace std;
void func()
{
    static int x = 0; // once initialised and never be initaialised again
    cout << "x : " << x << endl;
    x++;
}
int main()
{
    func();
    func();
    func();

    return 0;
}