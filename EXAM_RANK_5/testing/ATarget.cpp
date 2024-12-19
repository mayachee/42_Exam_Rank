/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:41:00 by mayache-          #+#    #+#             */
/*   Updated: 2024/12/19 14:08:58 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

std::string ATarget::getType() const
{
    return (type);
}
// ATarget::ATarget()
// {
    
// }
ATarget::~ATarget()
{
    
}

ATarget & ATarget::operator=(ATarget const & str)
{
    type = str.getType();
    return (*this);
}
ATarget::ATarget(ATarget const & src)
{
    *this = src;
}
ATarget::ATarget(std::string type) : type(type)
{
    
}

void ATarget::getHitBySpell(ASpell const & spell) const
{
    std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}
