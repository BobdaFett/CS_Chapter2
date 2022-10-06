//
// Created by lvas4 on 10/6/2022.
//

// Write a program that prompts the user for a measurement in meters and then converts it to miles, feet, and inches.

#include <iostream>
using namespace std;

int main() {
    float user_input;
    cout << "Please input a measurement in meters: " << endl;
    cin >> user_input;

    // 1m = .00062137mi
    cout << "In miles: " << (user_input * 0.00062137) << endl;
    // 1m = ~3.28ft
    cout << "In feet: " << (user_input * 3.28) << endl;
    // 1m = ~39.37in
    cout << "In inches: " << (user_input * 39.37) << endl;

    return 0;
}