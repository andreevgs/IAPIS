//
// Created by tima on 16.03.21.
//

#include "AssignOperation.h"

bool AssignOperation::ParseOperation(std::vector<std::string> tok) {
    operands.push_back(tok[0]);
    operat = tok[1];
    operands.push_back(tok[2]);
    for(auto i : operands){
        size_t found = i.find_first_not_of("0123456789-");
        if(found != std::string::npos && i != "OP"){
            var.push_back(i);
        }
    }
    checkOperation();
    return true;
}

bool AssignOperation::checkOperation() {
    return true;
}

void AssignOperation::ToString(std::string &str) {
    str += operands[0];
    str += " ";
    str += operat;
    str += " ";
    if(operands[1] == "OP"){
        next[0]->ToString(str);
    }else{
        str += operands[1];
    }
    str += ";\n";
}

void AssignOperation::show() {
    std::cout << name;
    Element::show();
    std::cout << "\n";
}
