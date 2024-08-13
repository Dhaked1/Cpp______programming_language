// Program to use #error Preprocessor

//#define USA 1
//#define IND 1
#include <iostream>
using namespace std ;
#if (!defined (USA) || !defined (IND))
   	#error ERROR: NO_CURRENCY rate is specified.
#endif
int main()
{
    	int amt;
    	amt = 1000;
    	cout << "\n Amount : " << amt;
	return 0 ;
}