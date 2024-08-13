#include <iostream>
using namespace std ;
class Counter
{
	unsigned int count;
public:
	Counter()
	{ 
		count = 0;
	}

	Counter( int cnt )
	{ 
		count = cnt;
	}

	int getCount()
	{
		return count;
	}
	
	Counter operator ++()	
	{
		count++;
		return Counter(count);
	}
};

int main()
{
	Counter c1, c2;
	cout << "\n c1 : " << c1.getCount();
	cout << "\n c2 : " << c2.getCount();
	
	++c1;
	c2 = ++c1;
	
	cout << "\n c1 : " << c1.getCount();
	cout << "\n c2 : " << c2.getCount();
	return 0 ;
}