// Copyright (c) 2021 Lauren Wheatley
//
// Created by: Lauren Wheatley
// Created on: April 2021
// This program calculates the sum of 2 numbers with user input

#include <iostream>
using std::<iomanip>

; int main() {
    int firstnumber, secondnumber, sumx;

    std::cout << "We will calculate the sum of two numbers. " << std::endl;

    cout << "Enter the integers: ";
    cin >> firstnumber
        >> secondnumber;

    // sum of two numbers in stored in variable sumx
    sumx = firstnumber + secondnumber;

    // Prints sum
    cout << firstnumber << " + " <<  secondnumber << " = " << sumx;

    return 0;}
