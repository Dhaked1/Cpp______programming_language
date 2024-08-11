#include<iostream>
using namespace std;
class counter
{
    unsigned int count;
    public:
    counter ()
    {
        count =0;
    }
    counter (int c)
    {
        count = c;
    }
    int getcount()
    {
        return count;
    }
    void operator -()
    {
        count = -count;
    }
};
int main()
{
    counter c1(10),c2(80);
    cout<<"c1 = "<<c1.getcount();
    cout<<"\nc2 ="<<c2.getcount();
    -c2;
    cout<<"\n-c2 ="<<c2.getcount();
    return 0;
}