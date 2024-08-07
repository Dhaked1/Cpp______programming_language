#include <iostream>
using namespace std;
int main()
{
    int i;
    char str1[50] = "jay shree ram";
    char str2[50];
    for (i = 0; str1[i] != 0; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    cout << "str1 = " << str1 << endl;
    cout << "str2 = " << str2 << endl;
    return 0;
}