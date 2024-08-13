#include <iostream>
using namespace std ;
int main()
{
	float r, h, v;
	float *pr, *ph, *pv;
	const float PI = 3.14;

	pr = &r;
	ph = &h;
	pv = &v;

	cout << " Enter Radius & Height : ";
	cin >> *pr >> *ph;

	*pv = PI * (*pr) * (*pr) * (*ph);
	cout << "\n Volume of Cylinder = " << *pv;
    return 0 ;
}