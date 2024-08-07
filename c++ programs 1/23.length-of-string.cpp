#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char str[50];
    int i,len;
    cout<<"enter string:"<<endl;
    gets(str);
    for ( i = 0; str[i]!='\0'; i++);
    len = i;
    cout<<"length of string is::"<<len;   
    return 0;
}

