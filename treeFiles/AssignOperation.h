//
// Created by gleb on 16.03.21.
//

#ifndef LANG_ASSIGNOPERATION_H
#define LANG_ASSIGNOPERATION_H
#include "MainOperation.h"


class AssignOperation : public MainOperation{
private:
    std::vector<std::string> operands;
    std::string operat;
    const std::string name = "assign";
public:
    bool ParseOperation(std::vector<std::string>) override;
    bool checkOperation() override;
    void ToString(std::string&)override;
    void show() override;
};


#endif //LANG_ASSIGNOPERATION_H
