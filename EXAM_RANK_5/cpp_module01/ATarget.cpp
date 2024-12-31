
#include "ATarget.hpp"

void ATarget::getHitBySpell(ASpell const & as) const
{
    std::cout << type << " has been " << as.getEffects() << "!" << std::endl;
}