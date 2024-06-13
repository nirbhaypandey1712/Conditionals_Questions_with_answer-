/*Write a program that takes two numbers from the user and uses the ternary operator 
to determine and print the smaller of the two numbers.*/

#include<iostream>
using namespace std;
int main() {
    int num1, num2, smaller;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    smaller = (num1 < num2) ? num1 : num2;
    cout << "The smaller number is: " << smaller << endl;
    return 0;
}