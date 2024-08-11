#include<iostream>
using namespace std;
class counter
{
 unsigned int count;
 public:
 counter()
 {
    count =0;
 }
 int getcount()
 {
    return count;
 }
counter operator ++()
{
    count++;
    counter c;
    c.count =count;
    return c;
}
};
int main()
{
    counter c1,c2;
    cout<<"\nc1::"<<c1.getcount();
    cout<<"\nc2::"<<c2.getcount();
    ++c1;
    c2 = ++c1;
    cout<<"\n ++c1="<<c1.getcount();
    cout<<"\nc2="<<c2.getcount();
    return 0;
}