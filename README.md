# Experiment 12



## Aim:
To study and implement recursion in C++


## Apparatus:
Vs Code, Github


## Theory:

Recursive functions in C++ are functions that call themselfs. Recursive functions can be used for many things such as a factorial function or a Fibbonaci series. The working of any recursive function relies on a base case that terminates the function doesnt continue infinetly. Recursion in any program in C++ occurs as any recursive case gets called multiple times with modified arguments that approach the base case which then terminates the function.


## Code:

### Factorial function:
```
#include<iostream>
using namespace std;

int fact(int n) {
    if (n <= 1) { 
        return 1;
    } else {
        return (n * fact(n - 1)); 
    }
}

int main() {
    int X, n;
    cout << "Enter a number: "; 
    cin >> n;      
    X = fact(n);
    cout << "Factorial = " << X << endl;
    return 0;
}
```
### Output:
<img width="844" alt="Screenshot 2024-10-06 at 1 03 57 PM" src="https://github.com/user-attachments/assets/b5d85134-1922-4c14-8370-cd50e19c342b">

### Addtion of all numbers:
```
#include<iostream>
using namespace std;

int add(int n) {
    if (n <= 1) { 
        return 1;
    } else {
        return (n+add(n - 1)); 
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
```
### Output:
<img width="633" alt="Screenshot 2024-10-06 at 2 11 29 PM" src="https://github.com/user-attachments/assets/4008a8dd-dadd-4aa3-b897-82cc46af3b07">

### Reverse string:
```
#include<iostream>
#include<string.h>
using namespace std;
void reverse(char *str){
    if(*str)
    {
        reverse(str+1);
        cout<<("%c", *str);
    }
}
int main(){
    char a[50];
    cout<<"Enter  a string:";
    cin>>a;
    reverse(a);
    return 0;
}
```
### Output:
<img width="580" alt="Screenshot 2024-10-06 at 2 14 31 PM" src="https://github.com/user-attachments/assets/1f4d1669-99f4-4149-96fd-2d84096e9b5a">

### Reverse numebers:
```
#include<iostream>
using namespace std;
void print_rev(int i){
    if(i>0){
        cout<<(i%10);
        print_rev(i/10);

    }
}
int main(){
    int i;
    cout<<"enter the number:";
    cin>>i;
    print_rev(i);
    return 0;
}
```
### Output:
<img width="709" alt="Screenshot 2024-10-06 at 2 24 02 PM" src="https://github.com/user-attachments/assets/fe6652c3-5014-4838-8a42-921c7da0decd">


## Conclusion:
These programs help us understand how recursion works in C++. We used recursion to create programs such as factorial funtion, reverse string, reverse numbers. 
