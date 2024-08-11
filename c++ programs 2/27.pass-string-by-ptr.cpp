#include<iostream>
using namespace std;
void display(char*);
int main()
{
    char s1[25] = "alka";
    display(s1);
return 0;
}
void display(char *p)
{
    while (*p)
    {
        cout<<*p;
        p++;
    }
}