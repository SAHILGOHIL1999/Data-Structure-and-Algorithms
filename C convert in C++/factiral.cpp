// Swap Two Numbers Swaps the values of two variables using a temporary variable.

#include <iostream>
using namespace std;

int main() {
    int factorial = 1;
    int n;
    
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; i++) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial << endl;
    }

    return 0;
}