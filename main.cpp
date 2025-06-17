//
// Created by Brian Birir on 16/06/2025.
//
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const short min_value = 1; // Minimum value for the random number
    const short max_value = 6; // Maximum value for the random number
    // Using srand to seed the random number generator
    srand(time(0));
    // Generating a random number
    short first = (rand() % (max_value - min_value + 1)) + min_value;
    short second = (rand() % (max_value - min_value + 1)) + min_value;
    // Outputting the random number
    cout << first << ", " << second << endl;
    return 0;
}