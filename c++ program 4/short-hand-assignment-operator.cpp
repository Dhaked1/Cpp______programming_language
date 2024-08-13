#include<iostream>
using namespace std ;
class height
{
	private:
	   int feet;
	   float inch;
	public:
	   height()
	   {
		feet=inch=0;
	   }
	   height(int f,float i)
	   {
		feet=f;
		inch=i;
	   }
	   void show()
	   {
		cout<<"Feet="<<feet<<"\tInches="<<inch<<endl;
	   }
	   void operator +=(height h)
	   {
		feet+=h.feet;
		inch+=h.inch;
		if(inch>=12)
		{
		inch=12;
		feet++;
		}
	   }
};

int main()
{
	height h1(10,15),h2(7,18);
	h1+=h2;
	h1.show();
return 0 ;
}