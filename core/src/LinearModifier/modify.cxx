
#include "LinearModifier.h"

namespace PathfinderCharacterAfterNext {

int LinearModifier::modify(int currentValue) const {
    return currentValue + _adjustment;
}

}

