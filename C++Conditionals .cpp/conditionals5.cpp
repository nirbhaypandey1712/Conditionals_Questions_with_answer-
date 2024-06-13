/*Write a program that takes a character representing a grade ('A', 'B', 'C', 'D', 'F') and 
prints the corresponding message: "Excellent" for 'A', "Good" for 'B', "Average" for 'C', 
"Poor" for 'D', and "Fail" for 'F'.*/

#include<iostream>
using namespace std;
int main() {
    char grade;
    cout << "Enter a grade (A, B, C, D, F): ";
    cin >> grade;
    switch (grade) {
        case 'A':
        cout << "Excellent";
        break;
        case 'B':
        cout << "Good";
        break;
        case 'C':
        cout << "Average";
        break;
        case 'D':
        cout << "Poor";
        break;
        case 'F':
        cout << "Fail";
        break;
        default:
        cout << "Invalid grade";
    }
    return 0;
}