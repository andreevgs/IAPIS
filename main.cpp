
#include <iostream>

#include "antlr4-runtime.h"
#include "GlebLexer.h"
#include "GlebParser.h"
#include <string.h>
#include <fstream>
#include "GlebVisitor.h"

using namespace antlrcpptest;
using namespace antlr4;

int main(int , const char **) {
  std::ifstream file;
  file.open("/Users/glebandreev/Downloads/GlebIapis/input.hell");
  std::string in = "",temp;
  while(!file.eof()){
      std::getline(file,temp);
      in += temp;
  }
  std::cout << in;
  ANTLRInputStream input(in);
  GlebLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  GlebParser parser(&tokens);
  GlebParser::MainContext* tree = parser.main();
  std::cout << tree->toStringTree(&parser) << std::endl << std::endl;
  Tree myTree;
  GlebVisitor visitor;
  visitor.SetTree(myTree);

  visitor.visit(tree);
  myTree.toFile();
  myTree.showTree();
  system("g++ -o /Users/glebandreev/Downloads/GlebIapis/result /Users/glebandreev/Downloads/GlebIapis/result.cpp");
  return 0;
}
