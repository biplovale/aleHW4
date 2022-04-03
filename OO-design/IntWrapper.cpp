#include <iostream>
#include "IntWrapper.h"

IntWrapper::IntWrapper(const int i) : Integer(i){}

IntWrapper::~IntWrapper() {
}

IntWrapper::IntWrapper(const IntWrapper &rhs): Integer(rhs.Integer){}

const IntWrapper &IntWrapper::operator=(const IntWrapper &rhs)
{
    if (this != &rhs)
        Integer = rhs.Integer;

    return *this;
}

bool IntWrapper::isLessThan(IComparable& rhs)
{
    std::cout << "islessthan";
    if(this->Integer < dynamic_cast<IntWrapper&>(rhs).Integer)
        return true;

    return false;
}

int IntWrapper::getInteger() const
{
    return Integer;
}