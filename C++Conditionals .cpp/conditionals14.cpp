/*Write a program that takes an integer from 1 to 7 and prints the corresponding day of the week (1 for Monday, 2 for Tuesday, etc.).*/

#include<iostream>
using namespace std;
int main() {
    int day;
    cout << "Enter a number from 1 to 7: ";
    cin >> day;
    switch (day) {
        case 1:
        cout << "Monday";
        break;
        case 2:
        cout << "Tuesday";
        break;
        case 3:
        cout << "Wednesday";
        break;
        case 4:
        cout << "Thursday";
        break;
        case 5:
        cout << "Friday";
        break;
        case 6:
        cout << "Saturday";
        break;
        case 7:
        cout << "Sunday";
        break;
        default:
        cout << "Invalid input";  
    }
    return 0;
}