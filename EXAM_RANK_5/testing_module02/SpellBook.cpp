#include "SpellBook.hpp"

void SpellBook::learnSpell(ASpell* spell)
{
    if (spellbook.find(spell->getName()) ==
        spellbook.end())
    {
        spellbook[spell->getName()] = spell->clone();
    }

}

void SpellBook::forgetSpell(std::string const &spellname)
{
    if (spellbook.find(spellname) !=
        spellbook.end())
    {
        delete spellbook[spellname];
        spellbook.erase(spellbook.find(spellname));
    }
}
ASpell* SpellBook::createSpell(std::string const &spellname)
{
    ASpell * spell = NULL;


	// if (spellbook.find(SpellName) != spellbook.end())
	// 	spellbook[SpellName]->launch(target);
     if (spellbook.find(spellname) != spellbook.end())
     {
        spell = spellbook[spellname];
     }
    return (spell);
}

SpellBook & SpellBook::operator=(SpellBook const &spell)
{
    spellbook = spell.spellbook;

    return (*this);
}
SpellBook::SpellBook(SpellBook const &spell)
{
     *this = spell;
}
SpellBook::SpellBook()
{

}
SpellBook::~SpellBook()
{

}