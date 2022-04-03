#ifndef ALEB1HW4_STRINGWRAPPER_H
#define ALEB1HW4_STRINGWRAPPER_H

#include "IComparable.h"
#include <string>

class StringWrapper: public IComparable {
public:
    StringWrapper();
    StringWrapper(const StringWrapper& rhs);
    const StringWrapper& operator=(const StringWrapper& rhs);
private:
    std::string String;
};


#endif //ALEB1HW4_STRINGWRAPPER_H
