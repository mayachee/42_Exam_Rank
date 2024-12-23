#include "Warlock.hpp"


std::string const & Warlock::getName() const
{
    return (name);
}

std::string const & Warlock::getTitle() const
{
    return (title);
}
void Warlock::setTitle(std::string const & title)
{
    this->title = title;
}

Warlock::Warlock()
{

}

Warlock::Warlock(Warlock const & str)
{

 *this = str;
    
}

Warlock::Warlock(std::string const & name, std::string const & title) : name(name), title(title)
{
    std::cout << name << ": This looks like another boring day." << std::endl;
}
Warlock & Warlock::operator=(Warlock const & str)
{
    name = str.name;
    title = str.title;
   return (*this);
}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;
}

void Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " << title <<"!" << std::endl;
}

void Warlock::learnSpell(ASpell * spell)
{
    spellbook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string namespell)
{
    spellbook.forgetSpell(namespell);
}

void Warlock::launchSpell(std::string namespell, ATarget const & target)
{
    if (spellbook.createSpell(namespell))
        spellbook.createSpell(namespell)->launch(target);
}
