// Program to use Compiler Control
// Directives ( #ifdef and #endif )
#include <iostream>
using namespace std ;
#define  INDIA  1

// #define  USA  1

#ifdef  INDIA 			
       	#define  PI   3.14159
#endif

#ifdef  USA	
  	#define   PI   3.14
#endif
int main()
{
	float r, a;
	cout << " Enter Radius : ";
	cin >> r;

	a = PI * r * r;

	cout << "\n Area of Circle : " << a;
    return 0 ;
}