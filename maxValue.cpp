// Copyright (c) 2023 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Dec/14/2023
// This program gets generate 10 random numbers
// between 1 and 100. It will determine the max number.
// My program uses a list and a loop to do what is listed above.

// Using these libraries to allow for arrays,
// time-related functions, outputs, and random
// number generation
#include <array>
#include <ctime>
#include <iostream>
#include <random>

// Template declaration that specifies the
// maximum size of the array.
template <size_t MAX_ARRAY_SIZE>
// Declaring function that will determine
// the max number in the array of elements.
int FindMaxValue(const std::array<int, MAX_ARRAY_SIZE>& ranNumbers) {
    // Initializing the max with the
    // first element at position 0 of
    // the array.
    int maxValue = ranNumbers[0];

    // Initializing the loop to 0.
    int counter = 0;

    // Using a while loop to go through
    // the elements of the array.
    while (counter < ranNumbers.size()) {
        // Comparing the current element
        // with the current max value
        if (maxValue < ranNumbers[counter]) {
            // Changing the max if the current
            // element is larger.
            maxValue = ranNumbers[counter];
        }

        // Incrementing the loop.
        counter++;
    }

    // Return the maximum value found in the array
    // to the function.
    return maxValue;
}

int main() {
    // Declaring constants
    const int MAX_ARRAY_SIZE = 10;
    const int MIN_NUMBER = 0;
    const int MAX_NUMBER = 100;

    // Initializing counter to 0.
    int counter = 0;

    // Declaring variables
    std::array<int, MAX_ARRAY_SIZE> ranNumbers;
    int maxUser;

    // Explaining my program to the user.
    std::cout << "This program generates a list of 10 random ";
    std::cout << "numbers between 0 and 100, ";
    std::cout << "and it will determine the largest number.\n";

    // Generating random numbers.
    srand(time(NULL));

    // Using a For loop to displays random numbers
    // and also to determine the maximum number.
    for (counter = 0; counter < MAX_ARRAY_SIZE; counter++) {
        // Assigning randomNumber variable to range from the
        // MIN_NUMBER (0) to the MAX_NUMBER (100).
        int randomNumber = (rand() % (MIN_NUMBER + MAX_NUMBER));

        // Assigning the generated random number to the array
        // at the current position.
        ranNumbers[counter] = randomNumber;

        // Displaying the generated random numbers to the user.
        std::cout << "\n"
                  << ranNumbers[counter];
        std::cout << " added to the list at position " << counter;
    }

    // Assigning the max number to the variable maxUser
    // and displaying the max number to the user.
    maxUser = FindMaxValue(ranNumbers);
    std::cout << "\nThe maximum value is: " << maxUser;
}
