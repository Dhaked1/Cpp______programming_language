#include <iostream>
using namespace std ;
template <class T, int size>
class A
{
	private:
   		T x[size];
  	 public:
		A()
		{ }

		A( T a[ ] )
		{
  			for( int i=0 ; i<size ; i++ )
   			{
   				x[ i ] = a[ i ];
   			}
		}

		void show()
		{
			for( int i=0 ; i<size ; i++ )
   			{
   				cout << "  " << x[ i ];
   			}
   			cout << endl;
		}
};
int main()
{
   	char ch[ ] = {'A', 'B', 'C'};
   	A<char, 3> a1(ch);
   	a1.show();

   	int  i[ ] = {10, 20, 30, 40, 50};
   	A<int, 5> a2(i);
   	a2.show();

   	float  f[ ] = {1.2, 2.3, 3.4, 4.5};
   	A<float, 4> a3(f);
   	a3.show();

   	double  d[ ] = {12.34, 23.45};
   	A<double, 2> a4(d);
   	a4.show();
       return 0 ;
}