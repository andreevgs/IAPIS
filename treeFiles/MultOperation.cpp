//
// Created by tima on 14.03.21.
//

#include "MultOperation.h"

bool MultOperation::ParseOperation(std::vector<std::string>tok) {
    operands.push_back(tok[0]);
    operat.push_back(tok[1]);
    if(operat[0] == "="){
        for(auto i = 2; i < tok.size();i++){
            if(tok[i] == "*"){
                operat.push_back(tok[i]);
            }else{
                operands.push_back(tok[i]);
            }
        }
    }else {
        operands.push_back(tok[2]);
    }
    for(auto i : operands){
        size_t found = i.find_first_not_of("0123456789-");
        if(found != std::string::npos && i != "OP"){
            var.push_back(i);
        }
    }
    return true;
}

bool MultOperation::checkOperation() {
    return true;
}

void MultOperation::ToString(std::string &str) {
    str += operands[0];
    str += " ";
    str += operat[0];
    str += " ";
    if(operat[0] == "="){
        if(operands[1] == "OP"){
            next[0]->ToString(str);
        }else{
            str += operands[1];
        }
        str += " ";
        str += operat[1];
        str += " ";
        if(operands[2] == "OP"){
            if(next.size() > 1){
                next[1]->ToString(str);
            }
            else{
                next[0]->ToString(str);
            }
        }else{
            str += operands[1];
        }
    }else{
        if(operands[1] == "OP"){
            next[0]->ToString(str);
        }else{
            str += operands[1];
        }
    }
    str += ";\n";
}

void MultOperation::show() {
    std::cout << name;
    Element::show();
    std::cout << "\n";
}