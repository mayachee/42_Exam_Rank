/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:28:00 by mayache-          #+#    #+#             */
/*   Updated: 2024/12/31 17:18:09 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

std::string ASpell::getName() const
{
    return (name);
}

std::string ASpell::getEffects() const
{
    return (effects);
}

ASpell::ASpell(ASpell &obj)
{
    *this = obj;
}

ASpell & ASpell::operator=(ASpell const & str)
{
    name = str.getName();
    effects = str.getEffects();

    return (*this);   
}

ASpell::ASpell()
{
    
}

ASpell::ASpell(std::string name, std::string effects) : name(name), effects(effects)
{
    
}

ASpell::~ASpell()
{
    
}

void ASpell::launch(ATarget const & target) const
{
    target.getHitBySpell(*this); 
}