//
// Created by lvas4 on 10/6/2022.
//

// Write a program that prompts the user for two integers and then prints:
// The sum, the difference, the product, the average, the distance, the max, and the min.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int first, second;
    cout << "Input number one: ";
    cin >> first;
    cout << "Input number two: ";
    cin >> second;

    cout << "The sum: " << (first + second) << endl;
    cout << "The difference: " << (first - second) << endl;
    cout << "The product: " << (first * second) << endl;
    cout << "The average: " << ((first + second) / 2) << endl;
    cout << "The distance: " << abs(first - second) << endl;
    cout << "The max: " << max(first, second) << endl;
    cout << "The min: " << min(first, second) << endl;

    return 0;
}