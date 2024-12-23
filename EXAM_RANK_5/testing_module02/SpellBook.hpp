
#pragma once
#include "ASpell.hpp"
#include <map>

// Now, make a SpellBook class, in canonical form, that can't be copied or instantiated
// by copy. It will have the following functions:

// * void learnSpell(ASpell*), that COPIES a spell in the book
// * void forgetSpell(std::string const &), that deletes a spell from the book, except
//   if it isn't there
// * ASpell* createSpell(std::string const &), that receives a string corresponding to
//   the name of a spell, creates it, and returns it.

class SpellBook
{
    private:
        SpellBook & operator=(SpellBook const &spell);
        SpellBook(SpellBook const &spell);
        std::map<std::string, ASpell *> spellbook;

    public:
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell *spell);
        void forgetSpell(std::string const &spellname);
        ASpell* createSpell(std::string const &spellname);
};
