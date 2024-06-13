/*Write a program that takes the height and weight of a person and calculates the Body Mass Index (BMI). 
Print the BMI category:
BMI < 18.5: Underweight
18.5 ≤ BMI < 24.9: Normal weight
25 ≤ BMI < 29.9: Overweight
BMI ≥ 30: Obesity
*/

#include<iostream>
using namespace std;
int main() {
    float height, weight, bmi;
    cout << "Enter your height in meters: ";
    cin >> height;
    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    bmi = weight / (height * height);
    cout << "Your BMI is: " << bmi << endl;
    if (bmi < 18.5) {
        cout << "You are Underweight." << endl;
    }
    else if (bmi >= 18.5 && bmi < 24.9) {
        cout << "You are Normal weight." << endl;
    }
    else if (bmi >= 25 && bmi < 29.9) {
        cout << "You are Overweight." << endl;
    }
    else if (bmi >= 30) {
        cout << "You are Obese." << endl;
    }
    return 0;
}