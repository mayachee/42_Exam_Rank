
#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"

class SpellBook
{
    private:
         SpellBook(SpellBook const & obj);
        SpellBook & operator=(SpellBook const & str);
        std::map<std::string, ASpell *> spellbook;

    public:
    // * void learnSpell(ASpell*), 
    // that COPIES a spell in the book
    void learnSpell(ASpell*);
    // * void forgetSpell(string const &), that deletes a spell from the book, except
    // if it isn't there
    void forgetSpell(std::string const &namespell);
    // * ASpell* createSpell(string const &), that receives a string corresponding to
    // the name of a spell, creates it, and returns it.
    ASpell* createSpell(std::string const &namespell);
            SpellBook();
        ~SpellBook();
};
