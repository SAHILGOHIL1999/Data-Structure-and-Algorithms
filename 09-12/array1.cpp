// C++ Program to check Array is palindrome or not

#include <iostream>

using namespace std;

int main(){
  
  int arr[100] , n;
  bool isPalidrome = true;

  cout << "Enter number of elements: ";
  cin >> n;

  cout << "Enter array elements:\n";
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  int start = 0;
  int end = n - 1;

  // check Palindrome

  while(start < end){
    if(arr[start] != arr[end]){
      isPalidrome = false;
    }

    start++;
    end--;
  }

  if(isPalidrome)
    cout << "\n Array is a Palidrome";
  else
    cout << "\n Array is not a Palidrome";
  
  return 0;

}



