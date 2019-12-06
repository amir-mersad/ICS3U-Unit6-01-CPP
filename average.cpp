// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on September 2019
// This program checks if the entered number is the same as random number

#include <iostream>
#include <random>
#include <time.h>


int main() {
    // This function checks if the entered number is the same as random number
    float result = 0;
    int numberRandom;
    int listNumber[10];

    srand(time(NULL));

    // Process
    for (int numberOfNumbers = 1; numberOfNumbers <= 10; numberOfNumbers ++) {
        numberRandom = rand() % 100 + 1;  // random number between 1 and 10
        std::cout << numberRandom << std::endl;
        listNumber[numberOfNumbers] = numberRandom;
    }

    for (int counter = 1; counter <= 10; counter++) {
        result = result + listNumber[counter];
    }

    result = result / 10;
    std::cout << std::endl;
    std::cout << result << std::endl;
}
