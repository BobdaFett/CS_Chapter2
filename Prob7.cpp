//
// Created by lvas4 on 10/6/2022.
//

// Write a program that asks the user for the lengths of two sides of a triangle and the size of the angle between the
// two sides. Then, display the length of the third side and the sizes of the two other angles.
// I haven't done trig since sophomore year, roughly 5 years ago.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Input side one: ";
    double first;
    cin >> first;
    cout << "Input side two: ";
    double second;
    cin >> second;
    cout << "Input the angle, in degrees: ";
    double angle;
    cin >> angle;

    // Do math for third side length
    float third = sqrt(pow(first, 2) + pow(second, 2));


    // I don't remember my trig - will retry at a later date.
    cout << "The length of the third side: " << third << endl;
    cout << "This should be the same as the angle given: " << (tan(first/third) * (180/M_PI)) << endl;
    cout << "The first angle: " << endl;
    cout << "The second angle: " << endl;

    return 0;
}