//
// Created by lvas4 on 10/11/2022.
//

// Create a program that asks the user to input the number of gallons of gas in the tank, the MPG, and the price/gallon.
// Print out how far the car can go currently, and then the cost per 100 miles.

#include <iostream>
using namespace std;

int main() {
    double num_gallons, mpg, price;

    cout << "Input the amount of gas currently in the tank: ";
    cin >> num_gallons;
    cout << "Input the fuel efficiency (miles per gallon): ";
    cin >> mpg;
    cout << "Input the current price of gas: ";
    cin >> price;

    cout << "\nThe car can currently go " << (num_gallons * mpg) << " miles without needing to refill." << endl;
    cout << "For each 100 miles, it will cost about $" << ((100/mpg) * price) << endl;
    // This is not currently formatted, will come back another time.


    return 0;
}