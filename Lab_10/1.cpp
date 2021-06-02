#include <iostream>
using namespace std;
class ECS188_Polygon
{
protected:
    int ECS188_height, ECS188_width;
};
class Rectangle : public ECS188_Polygon
{
public:
    void ECS188_setData(int p = 40, int q = 50)
    {
        ECS188_height = p;
        ECS188_width = q;
    }
    void area()
    {
        cout << "Area of rectangle:" << ECS188_height * ECS188_width << endl;
    }
};
class Triangle : public ECS188_Polygon
{
public:
    void ECS188_setData(int p = 40, int q = 50)
    {
        ECS188_height = p;
        ECS188_width = q;
    }
    void area()
    {
        cout << "Area of Triangle:" << ECS188_height * ECS188_width * 0.5 << endl;
    }
};
int main()
{
    Rectangle r;
    Triangle t;
    r.ECS188_setData();
    r.area();
    t.ECS188_setData();
    t.area();
    return 0;
}