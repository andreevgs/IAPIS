//
// Created by gleb on 26.03.21.
//

#ifndef GLEB_POW_H
#define GLEB_POW_H
#include "MainOperation.h"

class Pow : public MainOperation{
private:
    std::vector<std::string> operands;
    std::vector<std::string> operat;
    const std::string name = "pow";
public:
    bool ParseOperation(std::vector<std::string>) override;
    bool checkOperation() override;
    void ToString(std::string &)override;
    void show() override;
};


#endif //GLEB_POW_H
