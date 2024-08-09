#include <iostream>
using namespace std ;

inline float lbstokg( float pounds )
{
     return 0.453592 * pounds;
}

int main()
{
     
     float lbs;

     cout << "\n Enter your weight in pounds ::: ";
     cin >> lbs;

     cout << " Your weight in kilogram is = " << lbstokg( lbs );

     return 0 ;
}