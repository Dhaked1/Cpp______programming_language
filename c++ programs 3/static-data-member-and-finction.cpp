#include<iostream>
using namespace std ;

class stat
{
    int code;
    static int count;

   public:
    stat()
    {
      code=++count;
    }
    void showcode()
    {
      cout<<"\n\tObject number is :"<<code;
    }
    static void showcount()
    {
	      cout<<"\n\tCount Objects :"<<count;
    }
};

int stat::count;

int main()
{
   
   stat obj1,obj2;

   obj1.showcount();
   obj1.showcode();
   obj2.showcount();
   obj2.showcode();
   return 0 ;
}
