#include <iostream>
using namespace std;
class shape
{
protected:
    float width, height;

public:
    shape(float a = 0, float b = 0)
    {
        width = a;
        height = b;
    }
    virtual void area() = 0;
};
class rectangle : public shape
{
public:
    rectangle(float a = 0, float b = 0) : shape(a, b)
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
        cout << "triangle class area:" << ((width * height) / 2) << endl;
    }
};
int main()
{
    shape *shape;
    rectangle rec(10, 6);
    triangle tri(273, 857);
    shape = &rec;
    shape->area();
    shape = &tri;
    shape->area();
    return 0;
}