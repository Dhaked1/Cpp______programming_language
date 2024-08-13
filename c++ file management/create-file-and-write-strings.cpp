#include<iostream>
using namespace std;
#include<fstream>
int main()
{
    ofstream out("test.txt");
    out<<"c++ programming examples\n";
    out<<"ggeher efjhgu frjkth\n";
    cout<<"\n data written in file";
    out.close();
    return 0;
}