//
// Created by gleb on 14.03.21.
//

#ifndef LANG_TREE_H
#define LANG_TREE_H
#include <list>
#include <iostream>
#include <fstream>
#include <vector>
#include "treeFiles/Element.h"
#include "treeFiles/MainOperation.h"
#include "treeFiles/CreateOperation.h"
#include "treeFiles/SummOperation.h"
#include "treeFiles/DiffOperation.h"
#include "treeFiles/MultOperation.h"
#include "treeFiles/DivOperation.h"
#include "treeFiles/PowOperation.h"
#include "treeFiles/SqrtOperation.h"
#include "treeFiles/AssignOperation.h"
#include "treeFiles/ForExpr.h"
#include "treeFiles/IfExpr.h"
#include "treeFiles/BlockExpr.h"
#include "treeFiles/Summ.h"
#include "treeFiles/Diff.h"
#include "treeFiles/Mult.h"
#include "treeFiles/Devide.h"
#include "treeFiles/Pow.h"


class Tree {
private:
    std::ofstream rez;
    std::vector<Element*>elements;
    Element* root;
    Element* current{};
    int count;
public:
    Tree();
    void toFile();
    void addElement(std::vector<std::string>,int);
    void showTree();
    bool getBack(std::vector<std::string>);
};


#endif //LANG_TREE_H
