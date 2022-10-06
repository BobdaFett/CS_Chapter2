//
// Created by lvas4 on 10/6/2022.
//

// Write a program that prompts the user for a radius and then prints the area and circumference of a circle with that
// radius, and then the volume and surface area of a square with that radius.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Input a number for the radius: " << endl;
    float radius;
    cin >> radius;

    cout << "For a circle: "
         << "The area: " << (M_PI * pow(radius, 2)) << endl
         << "The circumference: " << (2 * M_PI * radius) << endl;
    cout << "For a square: "
         << "The volume: " << pow(radius, 2) << endl
         << "The surface area: " << (radius * radius) << endl;

    return 0;
}