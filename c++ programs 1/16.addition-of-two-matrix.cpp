#include<iostream>
using namespace std;
int main()
{
int a[2][3],b[2][3],c[2][3];
int i,j;
for(i =0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        cout<<"enter the element for matrix a";
        cin>>a[i][j];
    }
}

for(i =0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        cout<<"enter the element for matrix b";
        cin>>b[i][j];
    }
}
for(i =0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
    c[i][j] = a[i][j]+b[i][j];
    }
}
cout<<"matrix A is:"<<endl;
for(i =0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        cout<<a[i][j]<<"\t";
    }
    cout<<"\n";
}
cout<<"matrix B is:"<<endl;
for(i =0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        cout<<b[i][j]<<"\t";
    }
    cout<<"\n";
}
cout<<"addition of matrix A and matrix B:"<<endl;
for(i =0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        cout<<c[i][j]<<"\t";
    }
    cout<<"\n";
}
return 0;
}

