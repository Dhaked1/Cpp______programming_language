#include <iostream>
using namespace std;
void fun1();
void fun2();
#pragma startup fun1
#pragma exit fun2

int main()
{
    cout << "\n inside main:";
    return 0;
}
void fun1()
{
    cout << "\n inside function 1()";
}
void fun2()
{
    cout << "\n inside function 2()";
}