//
// Created by tima on 14.03.21.
//

#ifndef LANG_POWOPERATION_H
#define LANG_POWOPERATION_H
#include "MainOperation.h"


class PowOperation : public MainOperation {
private:
    std::vector<std::string> operands;
    std::vector<std::string> operat;
    const std::string name = "powOp";
public:
    bool ParseOperation(std::vector<std::string>) override;
    bool checkOperation() override;
    void ToString(std::string &)override;
    void show() override;
    void checkTypes(std::map<std::string, std::string> Types)override;
};


#endif //LANG_POWOPERATION_H
