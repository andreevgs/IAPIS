//
// Created by gleb on 25.03.21.
//

#include "Summ.h"

bool Summ::ParseOperation(std::vector<std::string> tok) {
    operands.push_back(tok[0]);
    operands.push_back(tok[1]);
    operat.push_back(tok[2]);
    operands.push_back(tok[3]);
    operands.push_back(tok[4]);
    for(auto i : operands){
        size_t found = i.find_first_not_of("0123456789-");
        if(found != std::string::npos && i != "OP"&& i!= "(" && i != ")"){
            var.push_back(i);
        }
    }
    return true;
}

bool Summ::checkOperation() {
    return MainOperation::checkOperation();
}

void Summ::ToString(std::string &str) {
    str += operands[0];
    if(operands[0] != "OP"){
        str += operands[1];
    }else{
        next[0]->ToString(str);
    }
    str += " ";
    str += operat[0];
    str += " ";
    if(operands[2] != "OP"){
        str += operands[2];
    }else{
        if(next.size() > 1){
            next[1]->ToString(str);
        }else{
            next[0]->ToString(str);
        }
    }
    str += operands[3];
}

void Summ::show() {
    std::cout << name;
    Element::show();
    std::cout << "\n";
}
