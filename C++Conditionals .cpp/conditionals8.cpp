/*Write a program that simulates a simple login system. The program should ask for a username and a password. 
If the username is "admin" and the password is "password123", print "Login successful". 
If either the username or password is incorrect, print "Login failed".*/

#include<iostream>
#include<string>
using namespace std;
int main() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    if (username == "admin" && password == "password123") {
        cout << "Login successful";
    }
    else {
        cout << "Login failed";
    }
    return 0;
}