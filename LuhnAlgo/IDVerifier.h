#ifndef IDVERIFIER_H
#define IDVERIFIER_H

#include <string>
#include <iostream>

class IDVerifier {
private:
    std::string ID;
public:
    IDVerifier(std::string inputID);
    void printID();
    bool verifyID();
};

#endif