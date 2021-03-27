//
// Created by tima on 25.03.21.
//

#ifndef GLEB_MULT_H
#define GLEB_MULT_H
#include "MainOperation.h"

class Mult : public MainOperation {
private:
    std::vector<std::string> operands;
    std::vector<std::string> operat;
    const std::string name = "mult";
public:
    bool ParseOperation(std::vector<std::string>) override;
    bool checkOperation() override;
    void ToString(std::string &)override;
    void show() override;
};


#endif //GLEB_MULT_H
