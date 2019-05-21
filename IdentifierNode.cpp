#ifndef IDNODE
#define IDNODE


#include "MemoryLocationNode.cpp"

#include <iostream>
#include <string>

class IdentifierNode : MemoryLocationNode
{
private:
    int binding;
    std::string name;
public:
    IdentifierNode(int _binding, std::string _name) : binding(_binding), name(_name) {}
    ~IdentifierNode();

    int codeGen();
    int getBinding();
};

int IdentifierNode::codeGen()
{
    std::cout << "CodeGen Identifier" << std::endl;
}
int IdentifierNode::getBinding()
{
    std::cout << "getBinding Identifier" << std::endl;
}

#endif