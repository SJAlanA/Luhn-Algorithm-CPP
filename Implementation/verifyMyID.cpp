#include<iostream>
#include "LuhnAlgo/IDVerifier.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Kindly use the program in the following manner: verifyMyID <ID>";
        return 1;
    }

    IDVerifier verifier(argv[1]);

    verifier.printID();

    bool isLegit = verifier.verifyID();

    if( isLegit ) std::cout << "\nThe ID is Legit";
    else std::cout << "\nThe ID is not Legit";

    return 0;
}
