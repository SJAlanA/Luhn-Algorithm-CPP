#include "IDVerifier.h"

IDVerifier::IDVerifier(std::string inputID) {
    ID = inputID;
}

void IDVerifier::printID() {
    std::cout << "The ID that was entered for verification is " << ID << std::endl;
}

bool IDVerifier::verifyID() {
    std::cout << "Verification In-Progress for ID " << ID << std::endl;
    // Luhn Algorithm to be implemented
    return true;
}