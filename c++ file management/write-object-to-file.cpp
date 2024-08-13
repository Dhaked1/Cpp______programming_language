#include<iostream>
#include<fstream>
using namespace std;
class person
{
char name[25];
int age;
public:
void getdata()
{
    cout<<"enter your name";
    cin.getline(name,25);
    cout<<"enter age:";
    cin>>age;
}
void showdata()
{
    cout<<"\n name:"<<name;
    cout<<"\n age:"<<age;
}
};
int main()
{
    person p;
    ofstream out("person.txt");

    p.getdata();
    out.write((char *)&p,sizeof(p));

    out.close();
    return 0;
}