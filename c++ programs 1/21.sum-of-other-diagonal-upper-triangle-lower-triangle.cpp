#include<iostream>
using namespace std;
int main()
{
    int a[3][3],i,j,sod =0,sut=0,slt=0,sa=0;
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
        if(i+j == 2)
        sod = sod+a[i][j];
        if(i<=j)
        sut = sut+a[i][j];
        if(i>=j)
        slt = slt+a[i][j];
sa = sa +a[i][j];
    }
}
cout<<"\n matrix A:"<<endl;
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        cout<<a[i][j]<<"\t";
    }
    cout<<"\n";
}
cout<<"\n sum of other diagonal is:"<<sod;
cout<<"\n sum of upper triangle is:"<<sut;
cout<<"\n sum of lower triangle is:"<<slt;
cout<<"\n sum of all elements  is:"<<sa;

return 0;
}