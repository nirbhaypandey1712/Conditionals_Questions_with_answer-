/*Write a program that takes a word as input and checks if it is "hello". If it is, print "Greetings!"; otherwise, print "Goodbye!".*/

#include<iostream>
using namespace std;
int main(){
    string word;
    cout << "Enter a word: ";
    cin >> word;
    if(word == "hello"){
        cout << "Greetings!";
    }
    else{
        cout << "Goodbye!";
    }
    return 0;
}