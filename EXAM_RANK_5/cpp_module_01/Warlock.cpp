/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:27:42 by mayache-          #+#    #+#             */
/*   Updated: 2024/12/12 12:49:47 by mayache-         ###   ########.fr       */
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

void Warlock::setTitle(std::string const & title)
{
    this->title = title;
}


Warlock::Warlock()
{
    
}

Warlock::Warlock(Warlock &obj)
{
    *this = obj;
}

Warlock & Warlock::operator=(Warlock const &str)
{
    name = str.name;
    title = str.title;

    return (*this);
}

Warlock::Warlock(std::string const & name, std::string const & title) : name(name), title(title)
{
    std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;
    	for (std::map<std::string, ASpell*>::iterator it = spellbook.begin(); it != spellbook.end(); ++it) {
		delete it->second;
	}
	spellbook.clear();
}

void Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell * spell)
{
    if (spell)
    {
        if (spellbook.find(spell->getName()) ==
            spellbook.end())
        {
            spellbook[spell->getName()] = spell->clone();
        }
    }
}

void Warlock::forgetSpell(std::string spellname)
{
    if (spellbook.find(spellname) != spellbook.end())
    {
        delete spellbook[spellname];
        spellbook.erase(spellbook.find(spellname));
    }
}

void Warlock::launchSpell(std::string spellname, ATarget const & target)
{
    if (spellbook.find(spellname) != spellbook.end())
    {
        spellbook[spellname]->launch(target);
    }
}
