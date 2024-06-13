/*Write a program that defines two functions: isEven(int num) and isOdd(int num). 
Use these functions in the main program to check if a number entered by the user 
is even or odd and print the appropriate message.*/

#include<iostream>
using namespace std;
bool isEven(int num) {
    return (num % 2 == 0);
}

bool isOdd(int num){
    return (num % 2 != 0);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isEven(num)) {
        cout << "The number is even." << endl;
    }
    else if (isOdd(num)) {
        cout << "The number is odd." << endl;
    }
    return 0;
}