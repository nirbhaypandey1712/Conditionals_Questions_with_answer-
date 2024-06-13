/*Write a program that takes two numbers from the user and prints whether the first number 
is greater than, less than, or equal to the second number.*/

#include<iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    if (num1 > num2) {
        cout << "The first number is greater than the second number.";
    }
    else if (num1 < num2) {
        cout << "The first number is less than the second number.";
    }
    else {
        cout << "The first number is equal to the second number.";
    }
    return 0;
}