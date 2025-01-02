
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock
{
    private:
        Warlock()
        {

        }
        Warlock(Warlock const & obj)
        {
            *this = obj;
        }
        Warlock & operator=(Warlock const & obj)
        {
            name = obj.name;
            title = obj.title;

            return(*this);
        }

        std::string name;
        std::string title;

        SpellBook spellbook;


    public:
        std::string const & getName() const
        {
            return name;
        }


        std::string const & getTitle() const
        {
            return title;
        }

        void setTitle(std::string const & str)
        {
            title = str;
        }

        Warlock(std::string const & name,
            std::string const & title) : name(name), title(title)
        {
            std::cout << name << ": This looks like another boring day." << std::endl;
        }
        ~Warlock()
        {
            std::cout << name << ": My job here is done!" << std::endl;
        }

        void introduce() const
        {
            std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
        }

        void learnSpell(ASpell * spell)
        {
            spellbook.learnSpell(spell);
        }

        void forgetSpell(std::string namespell)
        {
            spellbook.forgetSpell(namespell);
        }

        void launchSpell(std::string spellname, ATarget const & target)
        {
            if (spellbook.createSpell(spellname))
		        spellbook.createSpell(spellname)->launch(target);
        }
};
