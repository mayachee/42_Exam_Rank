/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:54:09 by mayache-          #+#    #+#             */
/*   Updated: 2024/12/10 17:40:23 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

std::string const & Warlock::getName() const
{
    return (name);
}

std::string const & Warlock::getTitle() const
{
    return (title);
}

void  Warlock::setTitle(std::string const & str)
{
    title = str;
}

Warlock::Warlock()
{
}

Warlock::Warlock(Warlock const & obj)
{
	*this = obj;
}

Warlock::Warlock(const std::string & name, const std::string & title) : name(name), title(title)
{
    std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock & Warlock::operator=(Warlock const & ope)
{
    name = ope.name;
    title = ope.title;
    return (*this);
}

Warlock::~Warlock()
{
    std::cout << name << ":My job here is done!" << std::endl;
}

void Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl; 
}
