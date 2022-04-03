#ifndef ICOMPARABLE_H
#define ICOMPARABLE_H

class IComparable{
public:
    virtual bool isLessThan(IComparable& rhs) = 0;
};

#endif //ICOMPARABLE_H
