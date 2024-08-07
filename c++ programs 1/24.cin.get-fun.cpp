// input multiple words using cin.get() function
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    char str[50];
    cout << "enter a string::" << endl;
    cin.get(str, 50);
    cout << "entered string is::" << str;

    char s[70];
    cout << "enter a string(press '$' to end)" << endl;
    cin.get(s, 70, '$');
    cout << "entered string is..." << s;
    // getline ()
    char a[34];
    cout << "enter another string--" << endl;
    cin.getline(a, 34);
    cout << "string 3 is---" << a;
    return 0;
}