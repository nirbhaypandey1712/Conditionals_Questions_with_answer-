/*Write a program that takes the temperature as input and prints "It's hot" if the temperature is above 30 degrees Celsius.*/

#include<iostream>
using namespace std;
int main() {
    int temp;
    cout << "Enter the temperature in Celsius: ";
    cin >> temp;
    if (temp > 30) {
        cout << "It's very hot";
    }
    return 0;
}