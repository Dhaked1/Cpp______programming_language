#include<iostream>
using namespace std;
int main()
{
    char name[5][20] = {"alka","ram","dhaked","nissan","gtr"};
    int i;
    cout<<"names are...\n";
    for(i =0;i<5;i++)
    {
        cout<<"name"<<i+1<<"is::"<<name[i]<<endl;
    }
return 0;
}