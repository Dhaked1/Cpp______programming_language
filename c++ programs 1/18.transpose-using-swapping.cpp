#include <iostream>
using namespace std;

int main()
{
    int i, j, a[10][10], n;
    cout << "Enter the value of n for nxn matrix: ";
    cin >> n;


    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "Enter the element for matrix a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }


    cout << "\nOriginal matrix is..." << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }

    // Transpose the matrix
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    // Print transposed matrix
    cout << "Matrix after transpose..." << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
