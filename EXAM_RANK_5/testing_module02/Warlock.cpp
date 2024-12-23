#include "Warlock.hpp"

std::string const & Warlock::getName() const
{
    return (name);
}
std::string const & Warlock::getTitle() const
{
    return (title);
}

void Warlock::setTitle(std::string const & str)
{
    title = str;
}

Warlock::Warlock()
{

}
Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;
}
Warlock::Warlock(Warlock & obj)
{
    *this = obj;
}

Warlock::Warlock(std::string const & name, std::string const & title) : name(name), title(title)
{
    std::cout << name << ": This looks like another boring day." << std::endl;
}
Warlock & Warlock::operator=(Warlock const & obj)
{
    name = obj.name;
    title = obj.title;

    return (*this);
}

void Warlock::introduce() const
{
    std::cout << name << ": I am " << name <<", "<< title <<"!" << std::endl;
}

void Warlock::learnSpell(ASpell * spell)
{
    spellbook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string namespell)
{
    spellbook.forgetSpell(namespell);
}

void Warlock::launchSpell(std::string SpellName, ATarget const & target)
{
	if (spellbook.createSpell(SpellName))
        spellbook.createSpell(SpellName)->launch(target);
}

