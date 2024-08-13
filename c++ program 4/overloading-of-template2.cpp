#include <iostream>
using namespace std ;
template <class T>
void show(T a)
{
	cout << "\nTemplate Function-1 ::: a = " << a;
}

template <class T>
void show(T a, int b)
{

	cout << "\nTemplate Function-2 ::: a = " << a << " b = " << b;
}
int main()
{
	show(10);
	show('N');
	show(12.34);
	show("Nils");
	
	show(10, 3);
	show('N', 4);
	show(12.34, 5);
	show("Nils", 6);
    return 0 ;
}