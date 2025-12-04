#include <iostream>

using namespace std;

int main(){

  //C++ program to count odd and even values in array

  // Declare Array with odd and even interger values.

  int arr[] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11};

  int size = sizeof(arr) / sizeof(arr[0]);

  int oddCount = 0;
  int evenCount = 0;

  // Loop through Decalre with array values

  for(int i = 0; i < size; i++){
    if(arr[i] % 2 == 0){
      evenCount++;
    }else{
      oddCount++;
    } 
  }

  cout << "Number of evenCount value : " << evenCount << endl;
  cout << "Number of oddCount value  : " << oddCount << endl;

  return 0;

}