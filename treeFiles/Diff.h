//
// Created by gleb on 25.03.21.
//

#ifndef GLEB_DIFF_H
#define GLEB_DIFF_H
#include "MainOperation.h"

class Diff : public MainOperation {
private:
    std::vector<std::string> operands;
    std::vector<std::string> operat;
    const std::string name = "devide";
public:
    bool ParseOperation(std::vector<std::string>) override;
    bool checkOperation() override;
    void ToString(std::string &)override;
    void show() override;
};


#endif //GLEB_DIFF_H
