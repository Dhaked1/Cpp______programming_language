// Program to explain rethrowing the exception
// from inner catch to outer catch
#include <iostream>
using namespace std ;
void divide(double x, double y)
{
	cout << "\n Inside divide().";
	try
	{
		if( y == 0.0 )
		{
			throw y;
		}
		else
		{
			cout << "\n Division : " << (x/y);
		}
	}
	catch(double)
	{
		cerr << "\n Caught double inside divide.";
		throw;
	}
	cout << "\n End of function.";
}
int main()
{
	try 
	{ 
		cout << "\n Inside main().";
		divide(20.5, 10.5);
		divide(10.0, 0);
	}
	catch (double d) 
	{ 
		cerr << "\n Exception double inside main.";
	}
	cout << "\n END.";
	return 0 ;
}