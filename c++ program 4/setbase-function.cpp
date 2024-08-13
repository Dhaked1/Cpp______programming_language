// Program to use setbase() Manipulator
#include <iostream>
using namespace std ;
#include <iomanip>
int main()
{
	int n;
	cout << "Enter Decimal Number : ";
	cin >> setbase(10) >> n;
	
	cout << "\n Decimal Number     : " << setbase(10) << n;
	cout << "\n Octal Number       : " << setbase(8)<< n;
	cout << "\n Hexadecimal Number : " << setbase(16)<< n;
	return 0 ;
}