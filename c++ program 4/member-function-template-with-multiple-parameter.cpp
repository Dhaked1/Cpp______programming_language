#include <iostream>
using namespace std ;
template <class T1, class T2>
class A
{
   private:
   	T1 x;
      	T2 y;
   public:
   	A();
       	A( T1 a, T2 b );
      	void show();
      	T1   getX();
      	T2   getY();
};

template <class T1, class T2>
A<T1,T2> :: A()
{  }

template <class T1, class T2>
A<T1,T2> :: A( T1 a, T2 b )
{
  	x = a;
   	y = b;
}

template <class T1, class T2>
void A<T1,T2> :: show()
{
  	cout << "\n\n x = " << x << " y = " << y;
}

template <class T1, class T2>
T1 A<T1,T2> :: getX()
{
  	return x;
}

template <class T1, class T2>
T2 A<T1,T2> :: getY()
{
  	return y;
}
int main()
{
   	A<char, int> a1('B', 10);
   	a1.show();
   	cout << "\n x : " << a1.getX();
   	cout << "\n y : " << a1.getY();

   	A<int, float> a2(10, 12.34);
   	a2.show();
   	cout << "\n x : " << a2.getX();
   	cout << "\n y : " << a2.getY();

   	A<float, char> a3(12.34f, 'A');
   	a3.show();
   	cout << "\n x : " << a3.getX();
   	cout << "\n y : " << a3.getY();

   	A<double, int> a4(10.5, 20);
   	a4.show();
   	cout << "\n x : " << a4.getX();
   	cout << "\n y : " << a4.getY();
}