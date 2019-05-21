#include <iostream>

#include "IdentifierNode.cpp"
#include "ReadNode.cpp"

int main()
{
    MemoryLocationNode* idNode = (MemoryLocationNode*) new IdentifierNode(10, "Ammus");
    
    ReadNode readNode(idNode);

    readNode.codeGen();

    return 0;

}