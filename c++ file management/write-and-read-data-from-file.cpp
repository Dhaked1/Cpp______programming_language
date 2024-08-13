#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[25];
    int age;
    ofstream out("test.txt");
    cout<<"enter name:";
    cin.getline(name,25);
    cout<<"enter age:";
    cin>>age;

    out<<name<<endl;
    out<<age;
    out.close();

    ifstream in ("test.txt");
    in>>name;
    cout<<"\n name"<<name;
    in>>age;
    cout<<"\n age:"<<age;
    in.close();
    return 0;
}