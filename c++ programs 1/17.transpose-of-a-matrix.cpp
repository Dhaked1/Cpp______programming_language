#include <iostream>
using namespace std;
int main()
{
    int a[2][3], b[3][2];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "enter the element for matrix a";
            cin >> a[i][j];
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    cout << "original matrix...." << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n\n";
    }
    cout << "transpose of a matrix...." << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << b[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}