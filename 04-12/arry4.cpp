#include <iostream>

using namespace std;

int main()
{
    int arr[] = {2, -5, 6, 12, -14, 15, 0, 11};

    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)   // check positive number
        {
            sum += arr[i];
            count++;
        }
    }

    if (count > 0)
    {
        float average = (float)sum / count;
        cout << "Average of positive numbers: " << average << endl;
    }
    else
    {
        cout << "No positive numbers found." << endl;
    }

    return 0;
}
