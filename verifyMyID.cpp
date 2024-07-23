#include<iostream>
#include "LuhnAlgo/IDVerifier.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Kindly use the program in the following manner: verifyMyID <ID>";
        return 1;
    }

    IDVerifier verifier(argv[1]);

    verifier.printID();
    verifier.verifyID();

    return 0;
}
