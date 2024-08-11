#include<iostream>
using namespace std;
int main()
{
    int i;
    float f;
    int *p1;
    float *p2;
    void *p3;
    p1 = &i;//p1=&f will produce error
    p2 = &f;
    p3 = &i;
    p3 =&f;
    return 0;
}