/*Write a program that takes the marks of a student in three subjects and calculates the average. 
If the average is 90 or above, print "Grade A"; if the average is between 80 and 89, print "Grade B"; 
if the average is between 70 and 79, print "Grade C"; if the average is between 60 and 69, print "Grade D"; 
otherwise, print "Grade F".*/

#include<iostream>
using namespace std;
int main(){
    float mark1, mark2, mark3, average;
    cout << "Enter the marks of three subjects: ";
    cin >> mark1 >> mark2 >> mark3;
    average = (mark1 + mark2 + mark3) / 3.0;
    if(average >= 90){
        cout << "Grade A";
    }
    else if(average >= 80){
        cout << "Grade B";
    }
    else if(average >= 70){
        cout << "Grade C";
    }
    else if(average >= 60){
        cout << "Grade D";
    }
    else{
        cout << "Grade F";
    }
    return 0;
}