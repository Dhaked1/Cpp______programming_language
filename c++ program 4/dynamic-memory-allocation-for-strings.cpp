#include <iostream>
using namespace std ;
#include <string>

int main()
{
	char s1[25] = "C++ Programming Examples";
	int len = strlen(s1);
	
	char *ps;
	ps = new char[len +1];
	
	strcpy(ps, s1);
	cout << "\n ps = " << ps;
	delete ps;
	return 0 ;
}