#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch;
    ifstream in ("test.txt");
    while (in)
    {
        in.get(ch);
        cout<<ch;
    }
    in.close();
    return 0;
    
}