// Copyright (c) 2022 Immaculata HS All rights reserved.
//
// Created by: Marcus Wehbi
// Created on: Oct 2022
// This program checks if a user can guess the same number as the
// programs randomly generated number
// it also uses a try catch to ensure the user correctly inputs an integer

#include <iomanip>
#include <iostream>

int main() {
    // this function compares the programs chosen number with the users
    // generate a random number between 0 and 9
    // Declare integer variable
    int someRandomNumber;
    // initialize random seed
    srand(time(0));
    // set the parameters to 0 and 9
    // declare users integer as string
    std::string guessedNumberString;
    // declare variable for users number as integer
    int guessedNumberInt;
    // get the users chosen number between 0 and 9
    std::cout << "Enter a number between 0 and 9: ";
    std::cin >> guessedNumberString;

    try {
        guessedNumberInt = std::stoi(guessedNumberString);
        // check if the user selected the correct number
        if (someRandomNumber == guessedNumberInt) {
            // If they did, display it to them
            std::cout << "You guessed correctly.";
        }
        // make sure the users input is within parameters
        if (guessedNumberInt < 0 || guessedNumberInt > 9) {
            // if not, notify them
            std::cout << "Please enter a number within given parameters.";
        } else if (someRandomNumber != guessedNumberInt) {
            // check if the user selected the incorrect number
            // If they did, display it to them
            std::cout << "You guessed wrong, the correct answer was: "
                      << someRandomNumber << ".";
        }
    } catch (std::invalid_argument) {
        // display if error is encountered - an invalid input of integer
        std::cout << guessedNumberInt << " is not an integer.\n";
    }
}
