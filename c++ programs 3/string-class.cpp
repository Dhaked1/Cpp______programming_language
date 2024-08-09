#include <iostream>
using namespace std ;
#include <string.h>

class String
{
	char str[80];
public:
	String()
	{
		str[0] = '\0';
	}

	String(char s[ ])
	{
		strcpy(str, s);
	}	

	void display()
	{
		cout << str;
	}
};
int main()
{
	String s1("C++");
	String s2 = "Programming";
	String s3("Examples");
	
	cout << "\n s1 : "; 
	s1.display();
	cout << "\n s2 : "; 
	s2.display();
	cout << "\n s3 : "; 
	s3.display();	
	
	return 0 ;
}