/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 10:13:37 by mayache-          #+#    #+#             */
/*   Updated: 2024/12/19 14:06:06 by mayache-         ###   ########.fr       */
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
        
Warlock::Warlock()
{
    
}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(Warlock const & obj)
{
    *this = obj;
}

Warlock & Warlock::operator=(Warlock const & str)
{
    name  = str.name;
    title = str.title;

    return (*this);
}

Warlock::Warlock(std::string const & name, std::string const & title) : name(name), title(title)
{
    std::cout << name << ": This looks like another boring day." << std::endl;
	for (std::map<std::string, ASpell*>::iterator it = spellbook.begin(); it != spellbook.end(); ++it) {
		delete it->second;
	}
	spellbook.clear();
}


void Warlock::setTitle(std::string const & title)
{
    this->title = title;
}

void Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

//         * learnSpell, takes a pointer to ASpell,
//  that makes the Warlock learn a spell
void Warlock::learnSpell(ASpell * spell)
{
    if (spell)
    {
        if (spellbook.find(spell->getName()) ==
            spellbook.end())
        spellbook[spell->getName()] = spell->clone();
    }
}
void Warlock::forgetSpell(std::string namespell)
{
    if (spellbook.find(namespell) !=
        spellbook.end())
        {
            delete spellbook[namespell];
            spellbook.erase(namespell);
            
        }
}

void Warlock::launchSpell(std::string namespell, ATarget const & target)
{
    if (spellbook.find(namespell) !=
        spellbook.end())
    {
        spellbook[namespell]->launch(target);
    }
}