// Program to use Compiler Control
// Directives ( #ifndef and #endif )
#include <iostream>
using namespace std ;
#define  INDIA  1

// #define  USA  1

#ifndef   USA
       	#define  PI   3.14159
#endif

#ifndef   INDIA
  	#define   PI   3.14
#endif
int  main()
{
	float r, a;
	cout << " Enter Radius : ";
	cin >> r;

	a = PI * r * r;

	cout << "\n Area of Circle : " << a;
     return 0 ;
}