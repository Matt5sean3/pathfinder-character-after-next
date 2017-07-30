
#ifndef ABSTRACT_MODIFIER_H_
#define ABSTRACT_MODIFIER_H_

#include <vector>

namespace PathfinderCharacterAfterNext {

class AbstractModifier {
public:
    virtual int priority() const;
    virtual int modify(int currentValue) const;
};

typedef std::vector<AbstractModifier> ModifierList;

}

#endif

