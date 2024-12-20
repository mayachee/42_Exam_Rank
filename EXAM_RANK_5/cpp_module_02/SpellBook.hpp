
#pragma once
#include "ASpell.hpp"
#include <map>

class SpellBook
{
    private:
    	SpellBook(SpellBook const & src);
		SpellBook & operator=(SpellBook const & src);
        std::map<std::string, ASpell *> spellbook;

    public:
        void learnSpell(ASpell *spell);
        void forgetSpell(std::string const &spellname);
        ASpell* createSpell(std::string const &spellname);
        SpellBook();
		~SpellBook();
};
