#include<iostream>
using namespace std;
int main()
{
    int a[3][3],i,j,spd =0;
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
        if(i ==j)
        spd = spd+a[i][j];

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
cout<<"\n sum of principle diagonal is:"<<spd;
return 0;
}