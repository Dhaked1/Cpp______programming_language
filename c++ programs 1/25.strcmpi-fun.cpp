//strcmpi() function is used for comparision of two strings
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char pass1[10]  = "computer";
char pass2[10];
int ctr =0;
cout<<"enter your password::";
cin>>pass2;
ctr = strcmpi(pass1,pass2);
if(ctr ==0)
cout<<"correct password!!"<<endl;
else
cout<<"wrong password";
return 0;
}