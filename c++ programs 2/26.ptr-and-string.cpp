#include<iostream>
using namespace std;

int main() {
    char s1[25] = "alka"; // s1 is a modifiable array of characters
    char *p1 = const_cast<char*>("alka"); // p1 points to a string literal
    char s2[25];
    char *p2 = nullptr; // Initialize p2 to nullptr to avoid undefined behavior

    cout << "\n s1 = " << s1;
    cout << "\n p2 = " << (p2 ? p2 : "nullptr"); // Print p2 only if it's not null

    p2 = p1; // p2 now points to the same location as p1
    cout << "\n p2 = " << p2;

    p1++; // Increment p1 to point to the next character
    cout << "\n p1 = " << p1;
    cout << "\n p2 = " << p2;

    return 0;
}
