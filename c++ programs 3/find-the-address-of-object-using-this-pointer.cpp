#include <iostream>
using namespace std ;

class A
{
private:
	int x;
public:
	void showAddress()
	{
		cout << "\n Address of Object : " << this;
	}
};

int main () 
{ 
	
	
	A a1, a2, a3;

	a1.showAddress();
	a2.showAddress();
	a3.showAddress();	
	
	return 0 ;
}