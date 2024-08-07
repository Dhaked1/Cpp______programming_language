#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;
int main()
{
    int a[3][3],i,j,gt=0;
    int rs[3] ={0},cs[3]={0};
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"enter the value of matrix a";
            cin>>a[i][j];

        }
    }

for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        rs[i] = rs[i]+a[i][j];
        cs[j] = cs[j]+a[i][j];
        gt = gt+a[i][j];
    }
}


cout<<"\n matrix A:"<<endl;
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        cout<<setw(4)<<a[i][j]<<"\t";
    }
    cout<<"|"<<rs[i]<<endl;
}
cout<<"---------------------------\n";
for(i=0;i<3;i++)
{
    cout<<setw(4)<<cs[i];
}
cout<<"|"<<gt;
return 0;
}


