//late binding or run time binding
//early binding or static binding
#include <iostream>
using namespace std;
class shape
{
protected:
    float width, height;

public:
    shape(float a = 0.0, float b = 0.0)
    {
        width = a;
        height = b;
    }
    virtual void area()
    {
        cout << "shape class area ::" << 0;
    }
};
class rectangle : public shape
{
public:
    rectangle(float a = 0.0, float b = 0.0) : shape(a, b)
    {
    }
    void area()
    {
        cout << "rectangle class area:" << (width * height) << endl;
    }
};
class triangle : public shape
{
public:
    triangle(float a = 0, float b = 0) : shape(a, b)
    {
    }
    void area()
    {
        cout << "triangle class area :" << ((width * height) / 2) << endl;
    }
};
int main()
{
    shape *shape;
    rectangle rec(10, 7);
    triangle tri(10, 5);
    shape = &rec;
    shape->area();
    shape = &tri;
    shape->area();
    return 0;
}