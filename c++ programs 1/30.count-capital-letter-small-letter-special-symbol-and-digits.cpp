#include <iostream>
using namespace std;
int main()
{
    int cl = 0, sl = 0, d = 0, ss = 0, i;
    char a[50];
    cout << "enter string ::" << endl;
    cin >> a;
    for (i = 0; a[i] != 0; i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
        {
            cl++;
        }
        else if (a[i] >= 97 && a[i] <= 122)
            sl++;
        else if (a[i] >= 48 && a[i] <= 57)
            d++;
        else
            ss++;
    }

    cout << "\n total number of capital letter.." << cl;
    cout << "\n total number of small letter.." << sl;
    cout << "\n total number of special symbols.." << ss;
    cout << "\n total number of digits.." << d;
    return 0;
}