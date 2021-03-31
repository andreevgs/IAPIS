//
// Created by gleb on 25.03.21.
//

#ifndef GLEB_SUMM_H
#define GLEB_SUMM_H
#include "MainOperation.h"


class Summ : public MainOperation {
private:
    std::vector<std::string> operands;
    std::vector<std::string> operat;
    const std::string name = "summ";
public:
    bool ParseOperation(std::vector<std::string>) override;
    bool checkOperation() override;
    void ToString(std::string &)override;
    void show() override;
};


#endif //GLEB_SUMM_H
