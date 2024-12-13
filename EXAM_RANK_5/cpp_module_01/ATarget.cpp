/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:30:41 by mayache-          #+#    #+#             */
/*   Updated: 2024/12/12 12:46:55 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

std::string ATarget::getType() const
{
    return (type);
}

ATarget::ATarget(ATarget &obj)
{
    *this = obj;
}

ATarget & ATarget::operator=(ATarget const & str)
{
    type = str.getType();

    return (*this);   
}

ATarget::ATarget(std::string type) : type(type)
{
    
}

ATarget::~ATarget()
{
    
}

 void ATarget::getHitBySpell(ASpell const & as) const
 {
    std::cout << type << " has been " << as.getEffects() << "!" << std::endl;
 }