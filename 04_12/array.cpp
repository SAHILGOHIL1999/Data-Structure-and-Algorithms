#include <iostream>

using namespace std;

int main(){

  // C++ program to Traversing of Array

  // Declare and initialize an interger array

  int arr[5] = {10 , 20 , 30 , 40 , 50};

  // Traversing the array using a for loops.......

  for(int i = 0; i < 5; i++){
    cout << "Element at index : "<< i << ":" << arr[i] << endl;
  }

  return 0;

}