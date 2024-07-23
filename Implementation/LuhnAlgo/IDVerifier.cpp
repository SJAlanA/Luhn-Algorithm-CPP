#include "IDVerifier.h"

IDVerifier::IDVerifier(std::string inputID) {
    ID = inputID;
}

void IDVerifier::printID() {
    std::cout << "The ID that was entered for verification is " << ID << std::endl << std::endl;
}

bool IDVerifier::verifyID() {
    std::cout << "Verification In-Progress for ID " << ID << std::endl;
    // Luhn Algorithm
    int IDLength = ID.length();
    int LuhnSum = 0;
    for(int iter = 0; iter < IDLength; iter++) {
        // Convert the digit in ID from a char to a number
        int number = ID[iter] - '0';

        // If the number is in even position, we multiply it by two
        if(iter % 2 != 0) number = number * 2;

        // Add the number to the Luhn Summation of the ID and if it contains two digits, we add both digits and then do the sum
        LuhnSum += number / 10;
        LuhnSum += number % 10;
    }
    std::cout << "Verification Completed " << std::endl;
    //Return true if the Luhn Summation is a multiple of 10
    return (LuhnSum % 10 == 0);
}