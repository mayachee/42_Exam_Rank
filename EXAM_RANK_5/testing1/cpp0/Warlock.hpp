
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "SpellBook.hpp"
class Warlock
{
    private:
        Warlock();
        Warlock(Warlock const & str);
        Warlock & operator=(Warlock const & str);
        SpellBook spellbook;

        std::string name;
        std::string title;
    public:
        std::string const & getName() const;
        std::string const & getTitle() const;
        void setTitle(std::string const & title);
        Warlock(std::string const & name, std::string const & title);
        ~Warlock();
        void introduce() const;

        void learnSpell(ASpell * spell);
        void forgetSpell(std::string namespell);
        void launchSpell(std::string namespell, ATarget const & target);
};
