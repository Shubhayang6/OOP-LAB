#include <iostream>
using namespace std;
class Shape_188
{
protected:
    int x;

public:
    Shape_188(int p = 1) : x(p) {}
    virtual void area() = 0;
};
class Circle_188 : public Shape_188
{
public:
    Circle_188(int q = 2) : Shape_188(q) {}
    void area()
    {
        cout << "Area:" << 3.141 * x * x << endl;
    }
};
int main()
{
    Circle_188 c;
    Shape_188 *s = &c;
    s->area();
    return 0;
}