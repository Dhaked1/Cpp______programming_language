// Program to use cout.write() function
#include <iostream>
using namespace std ;
#include <string>
int main()
{
	char nm[25];
	cout << "Enter Name : ";
	cin.getline(nm, 25);
	cout.write("Name : ", 7).write(nm, strlen(nm));
	cout << endl;
		return 0 ;
}