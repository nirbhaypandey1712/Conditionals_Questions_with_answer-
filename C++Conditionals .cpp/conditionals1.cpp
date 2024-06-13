/*Write a program that checks if a number entered by the user is positive. If the number is positive, print "The number is positive."*/

#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(num > 0){
        cout << "The number is positive.";
    }
    return 0;
}