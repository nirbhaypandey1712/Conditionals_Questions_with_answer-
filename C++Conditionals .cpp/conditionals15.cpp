/*Write a program that takes a number from the user and checks if it is between 100 and 200 (inclusive). 
Print "The number is within the range" if it is, and "The number is outside the range" if it is not.*/

#include<iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(num >= 100 && num <= 200){
        cout << "The number is within the range";
    }
    else{
        cout << "The number is outside the range";
    }
    return 0;
}