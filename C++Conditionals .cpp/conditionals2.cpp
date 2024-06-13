/*Write a program that checks if a number entered by the user is even or odd. Print "The number is even" if it is even, 
and "The number is odd" if it is odd.*/

#include<iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << "The number is even";
    }
    else {
        cout << "The number is odd";
    }
    return 0;
}