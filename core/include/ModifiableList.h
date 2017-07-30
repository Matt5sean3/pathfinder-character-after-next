
#include "AbstractModifiable.h"
#include "AbstractModifier.h"

#include <vector>

namespace PathfinderCharacterAfterNext {

class ModifiableList : std::vector<AbstractModifiable> {
public:
    ModifiableList(int numModifiables);
    ModifiableList(int numModifiables, int* baseValues);
    ModifiableList modify(ModifierList modifications);
}

}

