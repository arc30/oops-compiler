#ifndef READNODE
#define READNODE


#include "Node.cpp"
#include "MemoryLocationNode.cpp"

#include <iostream>

class ReadNode : public Node
{
private:
    MemoryLocationNode* readTarget;
public:
    ReadNode(MemoryLocationNode* _readTarget) : readTarget(_readTarget) {}
    ~ReadNode() {}

    int codeGen();
};

int ReadNode::codeGen()
{
    readTarget->getBinding();
    std::cout << "CodeGen Read" << std::endl;
}

#endif