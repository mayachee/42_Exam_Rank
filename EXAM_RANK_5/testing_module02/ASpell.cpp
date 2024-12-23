#include "ASpell.hpp"

std::string ASpell::getName() const
{
    return(name);
}
std::string ASpell::getEffects() const
{
    return(effects);
}

ASpell::~ASpell()
{

}

ASpell::ASpell(ASpell const & obj)
{
    *this = obj;
}
ASpell::ASpell(std::string name, std::string effects) : name(name), effects(effects)
{

}
ASpell & ASpell::operator=(ASpell const & obj)
{
    name = obj.name;
    effects = obj.effects;

    return (*this);
}

void ASpell::launch(ATarget const & target) const
{
    target.getHitBySpell(*this);
}

