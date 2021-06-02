#include <iostream>
using namespace std;
class ECS188_Polygon
{
protected:
    int ECS188_height, ECS188_width;
    float result = 0;

public:
    virtual void ECS188_setData() {}
    void area()
    {
        cout << "Area:" << result << endl;
    }
};
class Rectangle : public ECS188_Polygon
{
public:
    void ECS188_setData(int p = 40, int q = 50)
    {
        ECS188_height = p;
        ECS188_width = q;
    }
    void rslt()
    {
        result = ECS188_height * ECS188_width;
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
    void rslt()
    {
        result = ECS188_height * ECS188_width * 0.5;
    }
};
int main()
{
    ECS188_Polygon *p;
    Rectangle r;
    Triangle t;
    r.ECS188_setData();
    r.rslt();
    cout << "Rectangle---";
    p = &r;
    p->area();
    t.ECS188_setData();
    t.rslt();
    cout << "Triangle---";
    p = &t;
    p->area();
    return 0;
}