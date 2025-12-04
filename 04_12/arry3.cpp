#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 5, 6, 12, 14, 15, 11};

    int size = sizeof(arr) / sizeof(arr[0]);

    int evenSum = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenSum += arr[i];   // add even numbers
        }
    }

    cout << "Sum of even numbers: " << evenSum << endl;

    return 0;
}



// int main()
// {
//     int arr[] = {2, 5, 6, 12, 14, 15, 11};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     int evenCount = 0;
//     int oddCount = 0;
//     int evenSum = 0;

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             evenCount++;
//             evenSum += arr[i];
//         }
//         else
//         {
//             oddCount++;
//         }
//     }

//     cout << "Even count : " << evenCount << endl;
//     cout << "Odd count  : " << oddCount << endl;
//     cout << "Even sum   : " << evenSum << endl;

//     return 0;
// }
