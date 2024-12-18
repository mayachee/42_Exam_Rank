/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 01:54:13 by mayache-          #+#    #+#             */
/*   Updated: 2024/12/18 02:40:59 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ASpell.hpp"
#include <map>


// Now, make a SpellBook class, in canonical form,
//  that can't be copied or instantiated
// by copy.
class SpellBook 
{
    protected:
        std::map<std::string, ASpell *> spellbk;
        
    public:
    // * void learnSpell(ASpell*), that COPIES a spell in the book
    void learnSpell(ASpell *);
    // * void forgetSpell(string const &), that deletes a spell from the book, except
    // if it isn't there
    void forgetSpell(string const &);
    // * ASpell* createSpell(string const &), that receives a string corresponding to
    // the name of a spell, creates it, and returns it.
    ASpell* createSpell(string const &);
};

void SpellBook::learnSpell(ASpell * spell)
{
    if (spell)
    {
        spellbk[spell->getEffects()] = spell->clone();
    }
}

void SpellBook::forgetSpell(string const &spellname)
{
    if (spellbk.find(spellname !=
            spellbk.end()))
    {
        delete spellbk[spellname];
        spellbk.erase(spellbk.find(spellname));
    }
}

ASpell* SpellBook::createSpell(string const &namespell)
{
    ASpell * sp = NULL;
    
    if(spellbk.find(namespell) != 
        spellbk.find())
    {
        sp = spellbk[namespell];
    }
    return (sp);
}

