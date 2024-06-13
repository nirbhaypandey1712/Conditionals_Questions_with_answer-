/*Write a program that takes a user's age as input and prints whether the user is a child (age < 13),
 a teenager (age 13-19), or an adult (age 20 and above).*/

 #include<iostream>
 using namespace std;
 int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age < 13){
        cout << "You are a child.";
    }
    else if(age >= 13 && age <= 19) {
        cout << "You are a teenager.";
    }
    else{
        cout << "You are an adult.";
    }
    return 0;
 }