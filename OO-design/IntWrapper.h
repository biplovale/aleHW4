#ifndef INTWRAPPER_H
#define INTWRAPPER_H

#include "IComparable.h"

class IntWrapper:public IComparable {
public:
    explicit IntWrapper(const int i);
    IntWrapper(const IntWrapper& rhs);
    const IntWrapper& operator=(const IntWrapper& rhs);
    ~IntWrapper();
    bool isLessThan(IComparable& rhs) override;
    int getInteger() const;
private:
    int Integer;
};


#endif //INTWRAPPER_H
