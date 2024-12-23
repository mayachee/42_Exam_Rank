#include "ATarget.hpp"

std::string ATarget::getType() const
{
    return type;
}

ATarget::ATarget(ATarget const & str)
{
     *this = str;
}


ATarget::ATarget(std::string type) : type(type)
{

}

ATarget & ATarget::operator=(ATarget const & rhs)
{
	type = rhs.getType();
	return *this;
}

ATarget::~ATarget()
{

}

// void ATarget::getHitBySpell(ASpell const & spell) const
// {
// std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
// }

void	ATarget::getHitBySpell(ASpell const & spell) const
{
	std::cout << type  << " has been " << spell.getEffects() << "!" << std::endl;
}

