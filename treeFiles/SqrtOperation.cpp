//
// Created by gleb on 14.03.21.
//

#include "SqrtOperation.h"

bool SqrtOperation::ParseOperation(std::vector<std::string> tok) {
    operands.push_back(tok[0]);
    operat.push_back(tok[1]);
    operat.push_back(tok[2]);
    operands.push_back(tok[3]);
    for(auto i : operands){
        size_t found = i.find_first_not_of("0123456789-");
        if(found != std::string::npos && i != "OP"){
            var.push_back(i);
        }
    }
    return true;
}

bool SqrtOperation::checkOperation() {
    return true;
}

void SqrtOperation::ToString(std::string & str) {
    str += operands[0];
    str += operat[0];
    str += "sqrt(";
    if(operands[1] == "OP"){
        next[0]->ToString(str);
    }else{
        str += operands[1];
    }
    str += ")";
    str += "\n";
}

void SqrtOperation::show() {
    std::cout << name;
    Element::show();
    std::cout << "\n";
}


void SqrtOperation::checkTypes(std::map<std::string, std::string> Types) {
}
