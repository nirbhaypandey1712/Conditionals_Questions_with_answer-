/*Write a program that takes the amount of purchase from the user and applies discounts 
based on the following criteria:
If the purchase amount is above $500, apply a 20% discount.
If the purchase amount is between $300 and $500, apply a 10% discount.
If the purchase amount is below $300, no discount is applied.
Print the final amount after applying the discount.
*/

#include<iostream>
using namespace std;
int main(){
    float amount, discount, finalAmount;
    cout << "Enter the amount of purchase: ";
    cin >> amount;
    if(amount > 500){
        discount = amount * 0.2;
        finalAmount = amount - discount;
    }
    else if(amount >= 300 && amount <= 500){
        discount = amount * 0.1;
        finalAmount = amount - discount;
    }
    else{
        finalAmount = amount;
    }
    cout << "The final amount after applying the discount is: " << finalAmount << endl;
    return 0;
}