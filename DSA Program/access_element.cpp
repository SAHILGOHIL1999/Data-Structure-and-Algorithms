// Program to access an element at a given index.

#include <iostream>

using namespace std;

int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    int val;

    cout << "Enter Index number: ";
    cin >> val;

    for (int i = 0; i < 5; i++)
    {
        if (val == i)
        {
            cout << "This value of Element : " << arr[i] << endl;
        }
    }

    return 0;
}
