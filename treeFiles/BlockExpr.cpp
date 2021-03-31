//
// Created by gleb on 25.03.21.
//

#include "BlockExpr.h"

bool BlockExpr::ParseOperation(std::vector<std::string>) {
    return true;
}

bool BlockExpr::checkOperation() {
    return true;
}

void BlockExpr::ToString(std::string & str) {
    str += "{\n";
    Element::ToString(str);
    str += "}\n";
}

void BlockExpr::show() {
    std::cout << name;
    Element::show();
}
