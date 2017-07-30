
#include "StaticModifier.h"

namespace PathfinderCharacterAfterNext {

int StaticModifier::modify(int currentValue) const {
    return _setPoint;
}

}

