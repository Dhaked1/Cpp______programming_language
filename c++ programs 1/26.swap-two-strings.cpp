#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[25],str2[25],temp[25];
    cout<<"enter two strings"<<endl;
    cin>>str1>>str2;
    cout<<"strings before swapping::\n"<<str1<<"\n"<<str2<<endl;

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    cout<<"strings after swapping:\n"<<str1<<"\n"<<str2;
    return 0;
}
