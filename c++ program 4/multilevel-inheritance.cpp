#include<iostream>
using namespace std ;
class top
{
  public:
	 int a;
	 void getdata()
	 {
	   cout<<"\n\nEnter first Number :::\t";
	   cin>>a;
	 }
	 void putdata()
	 {
	   cout<<"\nFirst Number Is :::\t"<<a;
	 }
};

//First level inheritance
class middle : public top
{
	public:
	      int b;
	void square()
	{
	    getdata();
	    b=a*a;
	    cout<<"\n\nSquare Is :::"<<b;
	}
};

//Second level inheritance
class bottom :public middle    // class bottom is derived_2 
{
      public:
	     int c;
       void cube()
       {
	square();
	c=b*a;
	cout<<"\n\nCube :::  "<<c;
       }
};

int main()
{
   bottom b1;
   b1.cube();
  return 0 ;
}