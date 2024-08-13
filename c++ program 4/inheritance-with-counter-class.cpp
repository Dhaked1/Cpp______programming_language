#include <iostream>
using namespace std ;
class Counter
{
protected:
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
		return Counter(++count);
	}
};

class CountDn : public Counter
{
public:
	Counter operator --()
	{
		return Counter(--count);
	}
};

int main()
{
	CountDn c1;
	cout << "\n c1 : " << c1.getCount();

	++c1; ++c1; ++c1;
	cout << "\n c1 : " << c1.getCount();

	--c1; --c1;
	cout << "\n c1 : " << c1.getCount();
	return 0 ;
}