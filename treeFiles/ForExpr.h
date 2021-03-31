//
// Created by gleb on 16.03.21.
//

#ifndef LANG_FOREXPR_H
#define LANG_FOREXPR_H
#include "MainOperation.h"


class ForExpr : public MainOperation {
private:
    std::vector<std::string> operands;
    std::string operat;
    const std::string name = "for";
public:
    bool ParseOperation(std::vector<std::string>)override;
    bool checkOperation()override;
    void ToString(std::string&)override;
    void show() override;
};


#endif //LANG_FOREXPR_H
