#include "SpellBook.hpp"


void SpellBook::learnSpell(ASpell * spell)
{
    if (spell)
    {
        spellbook[spell->getName()] = spell->clone();
    }
}

void SpellBook::forgetSpell(std::string const &namespell)
{
    if (spellbook.find(namespell) !=
        spellbook.end())
        {
            spellbook.erase(spellbook.find(namespell));
            
        }
}

ASpell* SpellBook::createSpell(std::string const &namespell)
{
    ASpell * tmp = NULL;
    if (spellbook.find(namespell) !=
        spellbook.end())
    {
        tmp = spellbook[namespell];
    }
    return (tmp);
}

SpellBook::SpellBook()
{

}
SpellBook::~SpellBook()
{

}

SpellBook::SpellBook(SpellBook const & obj)
{
    *this = obj;
}
SpellBook & SpellBook::operator=(SpellBook const & str)
{
    spellbook = str.spellbook;
    return (*this);
}