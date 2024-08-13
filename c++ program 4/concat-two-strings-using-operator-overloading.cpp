#include <iostream>
using namespace std ;
#include <string.h>
const int SZ = 80;

class String
{
	char str[SZ];
public:
	String()
	{
		strcpy(str, "\0");
	}

	String(char s[ ])
	{
		strcpy(str, s);
	}	

	void display()
	{
		cout << str;
	}

	String operator +( String );
};

String String :: operator +( String s2 )
{
	String tmp;
	if( (strlen(str) + strlen(s2.str)) < SZ )
	{
		strcpy(tmp.str, str);
		strcat(tmp.str, s2.str);
	}
	else
		cout << "\n String too long.";
	return tmp;
}

int main()
{
	String s1("C++");
	String s2 = "Programming";
	String s3("Examples");
	String s4;
	
	cout << "\n s1 : "; 
	s1.display();
	cout << "\n s2 : "; 
	s2.display();
	cout << "\n s3 : "; 
	s3.display();	
	
	s4 = s1;
	s4 = s1 + s2;
	cout << "\n s4 : "; 
	s4.display();	
	
	s4 = s4 + s3;
	cout << "\n s4 : "; 
	s4.display();	
	return 0 ;
}