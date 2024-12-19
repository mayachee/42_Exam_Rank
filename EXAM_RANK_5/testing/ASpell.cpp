/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 13:38:16 by mayache-          #+#    #+#             */
/*   Updated: 2024/12/19 14:08:26 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects) : name(name), effects(effects)
{

}

ASpell & ASpell::operator=(ASpell const & rhs)
{
	name = rhs.getName();
	effects = rhs.getEffects();
	return *this;
}

ASpell::ASpell(ASpell const & obj)
{
	*this = obj;
}

ASpell::~ASpell()
{

}

std::string ASpell::getName() const
{
	return (name);
}

std::string ASpell::getEffects() const
{
	return (effects);
}

void ASpell::launch(ATarget const & target) const
{
	target.getHitBySpell(*this);
}