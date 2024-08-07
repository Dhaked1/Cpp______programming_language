#include <iostream>
using namespace std;
int main()
{
    char line[82];
    int vowel = 0, cons = 0;
    cout << "enter a string(max 80 char)::" << endl;
    gets(line);
    for (int i = 0; line[i] != '\0'; i++)
    {
        switch (line[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            vowel++;
            break;
        default:
            cons++;
            break;
        }
    }
    cout << "the number of vowels" << vowel << endl;
    cout << "\n the number of consonants" << cons;
    return 0;
}
