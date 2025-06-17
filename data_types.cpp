//
// Created by Brian Birir on 16/06/2025.
//
#include <iostream>

using namespace std;

int main() {
    int number_of_farmers = 100; // Integer literal
    double price = 19.99;
    float interest_rate = 0.05f; // 'f' suffix indicates a float literal
    long file_size = 90000L; // 'L' suffix indicates a long literal
    char letter = 'A';
    bool is_valid = true;
    auto is_invalid = false; // 'auto' deduces the type based on the initializer

    cout << "Price: " << price << endl;
    cout << "Number of Farmers: " << number_of_farmers << endl;
    cout << "Interest Rate: " << interest_rate << endl;
    cout << "File Size: " << file_size << endl;
    cout << "Letter: " << letter << endl;
    cout << "Is Valid: " << is_valid << endl;
    cout << "Is Invalid: " << is_invalid << endl;
    cout << "Size of int: " << sizeof(number_of_farmers) << " bytes" << endl;
    cout << "Size of double: " << sizeof(price) << " bytes" << endl;
    cout << "Size of float: " << sizeof(interest_rate) << " bytes" << endl;
    cout << "Size of long: " << sizeof(file_size) << " bytes" << endl;
    cout << "Size of char: " << sizeof(letter) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(is_valid) << " bytes" << endl;
    cout << "Size of auto: " << sizeof(is_invalid) << " bytes" << endl;
    return 0;
}