// Program to use cout.fill() function
#include <iostream>
using namespace std ;
#include <iomanip>
int main()
{
	cout.fill('*');
	cout << setw(8) << 22 << endl;
	cout << setw(8) << 4444 << endl;
	cout << setw(8) << 666666 << endl;
			return 0 ;
}