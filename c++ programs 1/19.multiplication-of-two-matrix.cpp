#include <iostream>
using namespace std;

int main()
{
    int a[2][3], b[3][2], c[2][2];
    int i, j, k;

    // Input for matrix a (2x3)
    cout << "Enter elements for matrix a (2x3):" << endl;
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    // Input for matrix b (3x2)
    cout << "Enter elements for matrix b (3x2):" << endl;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            cin >> b[i][j];
        }
    }

    // Print matrix a
    cout << "Matrix a is:" << endl;
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    // Print matrix b
    cout << "Matrix b is:" << endl;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            cout << b[i][j] << "\t";
        }
        cout << endl;
    }

    // Initialize matrix c to zero and perform multiplication
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            c[i][j] = 0; // Initialize c[i][j] to zero
            for(k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print the result of matrix multiplication
    cout << "Matrix after multiplication is:" << endl;
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            cout << c[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
