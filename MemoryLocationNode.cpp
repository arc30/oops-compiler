#ifndef MEMLOCNODE
#define MEMLOCNODE


#include "Node.cpp"

class MemoryLocationNode : public Node
{
private:
public:
    MemoryLocationNode() {}
    ~MemoryLocationNode() {}

    virtual int getBinding() = 0;
};

#endif