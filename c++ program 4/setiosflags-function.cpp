#include <iostream>
using namespace std ;
#include <iomanip>
int main()
{
	cout << setiosflags(ios::showpos);
	cout << setiosflags(ios::showpoint);
	cout << setiosflags(ios::scientific);
	cout << setprecision(2);
	
	cout << setw(8) << 12.34567 << endl;
	cout << setw(8) << -12.30 << endl;
	cout << setw(8) << 12.00 << endl;	
	return 0 ;
}