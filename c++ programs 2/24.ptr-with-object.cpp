#include<iostream>
using namespace std;
class B
{
    public:
    void display()
    {
        cout<<"content of base class \n";
    }
};
class D:public B
{
    public:
    void display()
    {
        cout<<"content of derived class \n";
    }
};
int main()
{
    B *b;
    D d;
    b->display();
    b = &d;
    b->display();
    return 0;
}