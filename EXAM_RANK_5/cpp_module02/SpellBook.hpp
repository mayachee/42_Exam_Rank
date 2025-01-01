/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 17:42:45 by mayache-          #+#    #+#             */
/*   Updated: 2024/12/31 17:45:22 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include "ASpell.hpp"
#include <map>

class SpellBook
{
    private:
    
        SpellBook(SpellBook const & src)
        {
            *this = src;
        }

        SpellBook & operator=(SpellBook const & src)
        {
            spellbook = src.spellbook;
            return (*this);
        }
        std::map<std::string, ASpell *> spellbook;

    public:
        void learnSpell(ASpell *spell)
        {
            if (spell)
            {
                spellbook[spell->getName()] = spell->clone();
            }
        }
        void forgetSpell(std::string const &spellname)
        {
            if (spellbook.find(spellname) !=
                    spellbook.end() )
            {
                spellbook.erase(spellbook.find(spellname));
            }   
        }
        ASpell* createSpell(std::string const &spellname)
        {
            ASpell *spell = NULL;

            if (spellbook.find(spellname) != spellbook.end() )
            {
                spell = spellbook[spellname];
            } 
            return (spell);
        }

        SpellBook()
        {}

        ~SpellBook()
        {}
};
