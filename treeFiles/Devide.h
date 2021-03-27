//
// Created by tima on 25.03.21.
//

#ifndef GLEB_DEVIDE_H
#define GLEB_DEVIDE_H
#include "MainOperation.h"

class Devide : public MainOperation{
private:
    std::vector<std::string> operands;
    std::vector<std::string> operat;
    const std::string name = "devide";
public:
    bool ParseOperation(std::vector<std::string>) override;
    bool checkOperation() override;
    void ToString(std::string &)override;
    void show() override;
};


#endif //GLEB_DEVIDE_H
