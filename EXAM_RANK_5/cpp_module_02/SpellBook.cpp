
#include "SpellBook.hpp"

void SpellBook::learnSpell(ASpell *spell)
{

        if (spellbook.find(spell->getName()) ==
            spellbook.end() )
        {
            spellbook[spell->getName()] = spell->clone();
        }
}
void SpellBook::forgetSpell(std::string const &spellname)
{
    if (spellbook.find(spellname) !=
            spellbook.end() )
    {
        spellbook.erase(spellbook.find(spellname));
    }   
}
ASpell* SpellBook::createSpell(std::string const &spellname)
{
    ASpell *spell = NULL;

    if (spellbook.find(spellname) != spellbook.end() )
    {
        spell = spellbook[spellname];
    }  
    return (spell);
}

SpellBook::SpellBook(SpellBook const & src)
{
	*this = src;
}

SpellBook & SpellBook::operator=(SpellBook const & src)
{
	spellbook = src.spellbook;
	return (*this);
}

SpellBook::SpellBook()
{}

SpellBook::~SpellBook()
{}
