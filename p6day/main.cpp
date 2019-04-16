#include <iostream>

class CBase 
{
public:
    virtual void foo();
};

class CSub : public CBase 
{
public:
    void foo();
};

void CBase::foo()
{
    std::cout << "CBase::foo" << std::endl;
}

void CSub::foo()
{
    std::cout << "CSub::foo" << std::endl;
}

int main()
{
    CBase objb;
    CSub objs;

    objb.foo();
    objs.foo();

    return 0;
}