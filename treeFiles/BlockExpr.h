//
// Created by tima on 25.03.21.
//

#ifndef GLEB_BLOCKEXPR_H
#define GLEB_BLOCKEXPR_H
#include "MainOperation.h"

class BlockExpr : public MainOperation{
private:
    const std::string name = "block";
public:
    bool ParseOperation(std::vector<std::string>)override;
    bool checkOperation()override;
    void ToString(std::string&)override;
    void show() override;
};


#endif //GLEB_BLOCKEXPR_H
