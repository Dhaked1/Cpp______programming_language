#include <iostream>
using namespace std;
int main()
{
    int arr[10], i, beg = 0, end = 9, mid, key, pos = -1;
    cout << "enter 10 elements in ascending order:";
    for (i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the element to found:";
    cin >> key;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (key == arr[mid])
        {
            pos = mid + 1;
        }
        else if (key >= arr[mid])
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if (pos == -1)
        cout << "element not found:" << endl;
    else
        cout << "element pound ata the position:" << pos << endl;
    return 0;
}