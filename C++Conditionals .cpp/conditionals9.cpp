/*Write a program that defines a function isLeapYear(int year) that returns true if the given 
year is a leap year and false otherwise. Use this function in the main program to check if a
 year entered by the user is a leap year and print the appropriate message.*/

#include<iostream>
using namespace std;
bool isLeapYear(int year)
{
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return true;
        }
    }
    else{
        return false;
    }
}
int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if(isLeapYear(year)){
        cout << year << " is a leap year." << endl;
    }
    else{
        cout << year << " is not a leap year." << endl;
    }
    return 0;
}