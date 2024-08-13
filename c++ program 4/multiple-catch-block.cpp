// Program to use Multiple Catch block
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
	catch (char c) 
	{ 
		cerr << "\n Caught a char : " << c;
	}
	catch (int i) 
	{ 
		cerr << "\n Caught a int : " << i;
	}
	catch (double d) 
	{ 
		cerr << "\n Caught a double : " << d;
	}
	cout << "\n End of Try-catch system.";
}
int main()
{
	cout << "\n Testing Multiple Catches.";
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