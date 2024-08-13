// Program to use dec, oct and hex
#include <iostream>
#include <iomanip>
using namespace std ;
int main()
{
	int n;
	cout << "Enter Decimal Number : ";
	cin >> n;
	
	cout << "\n Decimal Number     : " << dec << n << endl;
	cout << "\n Octal Number       : " << oct << n << endl;
	cout << "\n Hexadecimal Number : " << hex << n << endl;
	return 0 ;
}