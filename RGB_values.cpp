// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on May 2021
// This program prints all the RGB values and uses nested loops

#include <iostream>

int main() {
    // This function prints the values
    int loopCounter1 = 0;
    int loopCounter2 = 0;
    int loopCounter3 = 0;

    // Process & Output
    std::cout << "This program prints all the RGB values." << std::endl;
    std::cout << "" << std::endl;
    for (loopCounter1 = 0; loopCounter1 < 255 + 1; loopCounter1++) {
        for (loopCounter2 = 0; loopCounter2 < 255 + 1; loopCounter2++) {
            for (loopCounter3 = 0; loopCounter3 < 255 + 1; loopCounter3++) {
                std::cout << "RGB(" << loopCounter1 << "," << loopCounter2
                    <<"," << loopCounter3 <<")" << std::endl;
            }
        }
    }
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
