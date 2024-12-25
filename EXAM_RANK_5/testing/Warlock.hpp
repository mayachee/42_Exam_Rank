

#include "ASpell.hpp"
#include <iostream>
#include <map>

class Warlock
{
    private:
        std::map<std::string, ASpell *> spellbook;
    public:
        void learnSpell(ASpell * spell)
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

        void forgetSpell(std::string spellname)
        {
            if (spellbook.find(spellname) !=
                    spellbook.end())
            {
                delete spellbook[spellname];
                spellbook.erase(spellbook.find(spellname));
            }
        }

        void launchSpell(std::string spellname, ATarget const & target)
        {
            if (spellbook.find(spellname) !=
                    spellbook.end())
            {
                spellbook[spellname]->launch(target);
            }
        }
        ASpell* createSpell(std::string const &spellname)
        {
            ASpell *tmp = NULL;
            if (spellbook.find(spellname) != spellbook.end() )
            {
                tmp = spellbook[spellname];
            }
            return (tmp);
        }

void launchSpell(std::string namespell, ATarget const & target)
{
    if (spellbook.createSpell(namespell))
    {
        spellbook.createSpell(namespell)->launch(target);
    }
}
};


// void Warlock::learnSpell(ASpell* spell)
// {
// 	if (spell)
// 		if (_SpellBook.find(spell->getName()) == _SpellBook.end())
// 			_SpellBook[spell->getName()] = spell->clone();
// }

// void Warlock::forgetSpell(std::string SpellName)
// {
// 	if (_SpellBook.find(SpellName) != _SpellBook.end()) {
// 		delete _SpellBook[SpellName];	
// 		_SpellBook.erase(_SpellBook.find(SpellName));
// 	}
// }

// void Warlock::launchSpell(std::string SpellName, ATarget const & target)
// {
// 	if (_SpellBook.find(SpellName) != _SpellBook.end())
// 		_SpellBook[SpellName]->launch(target);
// }