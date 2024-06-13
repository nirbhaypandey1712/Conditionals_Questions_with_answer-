/*Write a program that checks if a number entered by the user is a prime number. If it is prime, print 
"The number is prime"; otherwise, print "The number is not prime".*/

#include<iostream>
using namespace std;
int main() {
    int num, i, flag = 0;
    cout << "Enter a number: ";
    cin >> num;
    if(num <= 1){
        cout << "The number is not prime";
        return 0;
    }
    for(i = 2; i <= num/2; i++) {
        if(num % i == 0) {
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout << "The number is prime";
    }
    else {
        cout << "The number is not prime";
    }
    return 0;
}