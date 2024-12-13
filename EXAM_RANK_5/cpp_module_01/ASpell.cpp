/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:28:00 by mayache-          #+#    #+#             */
/*   Updated: 2024/12/12 12:29:35 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

std::string const & ASpell::getName() const
{
    return (name);
}

std::string const & ASpell::getEffects() const
{
    return (effects);
}


ASpell::ASpell(ASpell &obj)
{
    *this = obj;
}

ASpell & ASpell::operator=(ASpell const & str)
{
    name = str.name;
    effects = str.effects;

    return (*this);   
}

ASpell::ASpell()
{
    
}

ASpell::ASpell(std::string const & name, std::string const & effects) : name(name), effects(effects)
{
    
}

ASpell::~ASpell()
{
    
}

void ASpell::launch(ATarget const & target) const
{
    target.getHitBySpell(*this); 
}