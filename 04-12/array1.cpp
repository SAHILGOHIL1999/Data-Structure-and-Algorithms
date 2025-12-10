#include <iostream>

using namespace std;

int main(){
  // C++ program to count positive , negative and zero values in array

  // Declare and initialize an integer array with positive , nagative and zero value

  int arr[] = {-10, -3, -7, 0, 4, -8, 10, 5 , 12 , 0  , 12};

  int size = sizeof(arr) / sizeof(arr[0]); // calculate array size

  int positiveCount = 0;
  int nagativeCount = 0;
  int zeroCount = 0;

  // Loop with all element in the array

  for (int i = 0; i < size; i++)
  {
    if (arr[i] > 0)
    {
      positiveCount++;
    }
    else if (arr[i] < 0)
    {
      nagativeCount++;
    }
    else
    {
      zeroCount++;
    }
  }

  cout << "Number of Positive Values:" << positiveCount << endl;
  cout << "Number of Nagative Values:" << nagativeCount << endl;
  cout << "Number of Zero Values:" << zeroCount << endl;

  return 0;
}