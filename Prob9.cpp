//
// Created by lvas4 on 10/7/2022.
//

// Write a program that directs a cashier on how to give change.
// Ask the user for 2 inputs - the about due and the amount received.
// Compute the difference, then find the number of dollars, quarters, dimes, etc.
// Does not ask for anything other than the dollar, so for now that's all we will find.

#include <iostream>
using namespace std;

int main() {
    double due, rec;
    cout << "Input the amount due: ";
    cin >> due;
    cout << "Input the amount received: ";
    cin >> rec;

    // Convert into pennies
    int pennies_due = due * 100;
    int pennies_rec = rec * 100;

    // Get the difference
    int diff = pennies_due - pennies_rec; // should result in a negative number.

    // Compute the whole dollar amount
    int num_dollars = -(int)(diff) / 100;
    diff += num_dollars * 100;

    int num_quarters = -(int)diff / 25;
    diff += num_quarters * 25;
    int num_dimes = -(int)diff / 10;
    diff += num_dimes * 10;
    int num_nickels = -(int)diff / 5;
    diff += num_nickels * 5;
    int num_pennies = -(int)diff / 1;
    diff += num_pennies * 1;

    cout << "$" << num_dollars << endl;
    cout << "Quarters: " << num_quarters << endl;
    cout << "Dimes: " << num_dimes << endl;
    cout << "Nickels: " << num_nickels << endl;
    cout << "Pennies: " << num_pennies << endl;

    return 0;
}