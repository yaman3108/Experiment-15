#include<iostream>
using namespace std;

int add(int n) {
    if (n <= 1) { 
        return 1;
    } else {
        return (n+fact(n - 1)); 
    }
}

int main() {
    int X, n;
    cout << "Enter a number: "; 
    cin >> n;      
    X = add(n);
    cout << "addition of all numbers = " << X << endl;
    return 0;
}
