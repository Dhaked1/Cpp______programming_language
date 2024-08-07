#include<iostream>
using namespace std;
int main()
{
  int choice;
  float temp,cnvtemp;
  cout<<"1. farenhit to celcius :"<<endl;
  cout<<"2. celcius to farenhite :"<<endl;
  cin>>choice;
  if(choice == 1)
  {
    cout<<"\n enter temp in farenhite :";
    cin>>temp;
    cnvtemp = (temp - 32)/1.8;
    cout<<"\n the temp in celcius is :"<<cnvtemp;
  }
  else 
  {
    cout<<"\n enter temp in celsius :";
    cin>>temp;
    cnvtemp = (1.8*temp)+32;
    cout<<"\n the temp in farenhite is ="<<cnvtemp;
  }
  return 0;
}
