
#include "ASpell.hpp"

std::string ASpell::getName() const
{
    return (name);
}
std::string ASpell::getEffects() const
{
    return (effects);
}



ASpell::ASpell(ASpell const & str)
{

 *this = str;
    
}

ASpell & ASpell::operator=(ASpell const & str)
{
	name = str.getName();
	effects = str.getEffects();
   return (*this);
}

ASpell::~ASpell()
{

}
ASpell::ASpell(std::string name, std::string effects) : name(name), effects(effects)
{

}

void ASpell::launch(ATarget const & target) const
{
    target.getHitBySpell(*this);
}

