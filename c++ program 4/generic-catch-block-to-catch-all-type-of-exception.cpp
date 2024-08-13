// Program to use Generic Catch block to catch
// all types of Exceptions
#include <iostream>
using namespace std ;
void test(int x)
{
	try 
	{ 
		if(x == 0)
			throw 'B';
		else if(x == 1)
			throw x;
		else if(x == 2)
			throw 1.0;
		cout << "\n End of Try-block.";
	}
	catch(...) 
	{ 
		cerr << "\n Caught an exception.";
	}
	cout << "\n End of Try-catch system.";
}
int main()
{
	cout << "\n Testing Generic Catch.";
	cout << "\n\n x == 0 ";
	test(0);
	cout << "\n\n x == 1 ";
	test(1);
	cout << "\n\n x == 2 ";
	test(2);
	cout << "\n\n x == 3 ";
	test(3);
    return 0 ;
}