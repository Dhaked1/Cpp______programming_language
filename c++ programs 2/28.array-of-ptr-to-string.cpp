#include <iostream>
using namespace std;

int main()
{
    const char *p[3] = {"alka", "dhaked", "ram"}; // Use const char* for string literals
    for(int i = 0; i < 3; i++)
    {
        cout << p[i] << endl; // Added newline for better readability
    }
    return 0;
}
