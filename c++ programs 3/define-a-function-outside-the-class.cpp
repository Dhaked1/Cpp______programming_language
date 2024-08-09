#include<iostream>
using namespace std ;
class member
{
    public:
	   void inside()
	   {
		cout<<"This is Inside Member Function"<<endl;
	   }
	   void outside();
};

void member::outside()
{
	cout<<"This is Outside Member Function";
}

int main()
{
    
    member m;
    m.inside();
    m.outside();
    return 0 ;
}

 