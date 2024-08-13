#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch;
    ifstream f1("test.txt");
    ofstream f2("text1.txt");
    if(!f1)
    {
        cerr<<"\n can't open in file";
    }
    if(!f2)
    {
        cerr<<"\n can't open out file";

    }
    while (f1 && f1.get(ch))
    {
        f2.put(ch);
    }
    cout<<"file copied successfully!";
    f1.close();
    f2.close();
    return 0;    
}