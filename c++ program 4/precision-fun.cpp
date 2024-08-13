// Program to use cout.precision() function
#include <iostream>
using namespace std ;
int main()
{
	cout.precision(2);//use to show how much digit will can show after decimal 
	cout.width(8);
	cout << 12.34567 << endl;
	cout.width(8);
	cout << 12.1 << endl;
	return 0 ;
}