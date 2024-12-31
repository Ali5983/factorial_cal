/*A mathematician is working on a research project and needs a program to compute factorials of various numbers. 
The program should accept an integer input from the user and use a loop to calculate its factorial.
This will help the mathematician quickly validate her calculations during experiments. Write a program to fulfill this need.*/

#include <iostream>
using namespace std;
int Factorial(int num) {
    int factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial=factorial*i;
    }
    return factorial;
}

int main() {
    int num;
    cout << "Enter a number to calculate its factorial: ";
    cin >> num;
    
    int result = Factorial(num);
    cout << "The factorial of " << num << " is " << result << "." << endl;
}