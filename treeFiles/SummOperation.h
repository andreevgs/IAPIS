//
// Created by gleb on 14.03.21.
//

#ifndef LANG_SUMMOPERATION_H
#define LANG_SUMMOPERATION_H
#include "MainOperation.h"

class SummOperation : public MainOperation{
private:
    std::vector<std::string> operands;
    std::vector<std::string> operat;
    const std::string name = "summOp";
public:
    bool ParseOperation(std::vector<std::string>) override;
    bool checkOperation() override;
    void ToString(std::string &)override;
    void show() override;
};


#endif //LANG_SUMMOPERATION_H
