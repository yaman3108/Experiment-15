#include<iostream>
using namespace std;

// Function to calculate factorial
int add(int n) {
    if (n <= 1) { // Terminating statement (Base Condition)
        return 1;
    } else {
        return (n+fact(n - 1)); // Recursion
    }
}

int main() {
    int X, n;
    cout << "Enter a number: "; 
    cin >> n;      
    X = add(n); // Function calling
    cout << "addition of all numbers = " << X << endl;
    return 0;
}
