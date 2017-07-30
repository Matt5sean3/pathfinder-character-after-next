
#ifndef ABSTRACT_MODIFIABLE_H_
#define ABSTRACT_MODIFIABLE_H_

#include "AbstractModifier.h"

namespace PathfinderCharacterAfterNext {

class AbstractModifiable {
public:
    virtual int get() const;
    virtual AbstractModifiable modify(const AbstractModifier &modifier) const;
};

}

#endif
