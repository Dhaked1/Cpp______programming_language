#include<iostream>
using namespace std;
void display(char*p)
{
    int i;
    cout<<"\n string elements are:";
    for(i=0;*(p+i)!='\0';i++)
    {
        cout<<*(p+i);
    }
}
int main()
{
    char a[] = "gvjuvthjekjj jhyjhkmtk";
    display(a);
    return 0;
}
