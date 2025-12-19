// Program to insert an element at a specific position in an array.

#include <iostream>

using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int val;
    int num;

    cout << "Enter index number to update : ";
    cin >> val;

    for (int i = 0; i < n; i++)
    {
        if (val == i)
        {
            cout << "Enter new value to insert : ";
            cin >> num;

            arr[i] = num;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}