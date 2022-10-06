//
// Created by lvas4 on 10/6/2022.
//

// Write a program that displays the squares, cubes, and fourth powers of the numbers 1 through 5.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for(int i = 1; i <= 5; i++) {
        cout << pow(i, 2) << endl;
        cout << pow(i, 3) << endl;
        cout << pow(i, 4) << endl;
    }
    return 0;
}