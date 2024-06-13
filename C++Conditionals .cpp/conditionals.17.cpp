/*Ternary Operator for Eligibility:

Write a program that takes the age of a person and uses the ternary operator to print 
"Eligible to vote" if the age is 18 or above, and "Not eligible to vote" otherwise.*/

#include<iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    string eligibility = (age >= 18) ? "Eligible to vote " : "Not eligible to vote ";
    cout << eligibility << endl;
    return 0;
}