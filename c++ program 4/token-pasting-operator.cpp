// Program to use Token Pasting ( ## ) Operator
#include <iostream>
using namespace std ;

#define concat(a, b) a ## b
int main () 
{ 
	int xy = 100; 
	cout << "\n Value : " << concat(x, y);
	return 0 ;
}