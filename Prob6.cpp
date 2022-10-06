//
// Created by lvas4 on 10/6/2022.
//

// Write a program that asks the user for the lengths of the sides of a rectangle. Then, print the area and perimeter
// of the rectangle and the length of the diagonal.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Input side one: ";
    float first;
    cin >> first;
    cout << "Input side two: ";
    float second;
    cin >> second;

    cout << "The area: " << (first * second) << endl;
    cout << "The perimeter: " << ((first * 2)  + (second * 2)) << endl;
    cout << "The diagonal: " << sqrt(pow(first, 2) + pow(second, 2)) << endl;

    return 0;
}