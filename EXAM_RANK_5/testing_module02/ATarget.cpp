#include "ATarget.hpp"


std::string ATarget::getType() const
{
    return(type);
}

ATarget::~ATarget()
{

}

ATarget::ATarget(ATarget const & obj)
{
    *this = obj;
}

ATarget::ATarget(std::string type) : type(type)
{

}

ATarget & ATarget::operator=(ATarget const & obj)
{
    type = obj.getType();

    return (*this);
}

void ATarget::getHitBySpell(ASpell const & spell) const
{
    std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}
