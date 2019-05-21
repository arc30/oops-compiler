#ifndef NUMNODE
#define NUMNODE


#include "Node.cpp"

#include <iostream>

class NumberNode : public Node
{
private:
    int number;
public:
    NumberNode(int _number) : number(_number) {}
    ~NumberNode() {}

    int codeGen();
};

int NumberNode::codeGen()
{
    std::cout << "CodeGen Identifier" << std::endl;
}


#endif