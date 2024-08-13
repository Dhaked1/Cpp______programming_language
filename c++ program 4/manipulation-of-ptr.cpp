#include<iostream>
using namespace std ;
int main()
{
   int a=10,*ptr;
   ptr=&a;
	cout<<"The Value of a is : "<<a<<endl;
	*ptr=(*ptr)/2;
	cout<<"The Value of a is : "<<(*ptr);
   return 0 ;
}