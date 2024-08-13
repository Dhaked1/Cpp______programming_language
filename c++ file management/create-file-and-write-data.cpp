#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char str[50] = "gyfurgh iouiu8e gi5moi7riui u4yndu8u4";
    ofstream out("test.txt");
    for(int i=0;str[i]!='\0';i++)
    {
        out.put(str[i]);
    }
    cout<<"\n data written characterwise.";
    out.close();
    return 0;
}