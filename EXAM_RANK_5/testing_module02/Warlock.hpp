
#include <iostream>
#include "ASpell.hpp"
#include "SpellBook.hpp"

class Warlock
{
    private:
        Warlock(Warlock &obj);
        Warlock &operator=(Warlock const & str);
        Warlock();

        std::string name;
        std::string title;

        SpellBook spellbook;
    
    public:
        std::string const & getName() const;
        std::string const & getTitle() const;

        void setTitle(std::string const & title);

        Warlock(std::string const & name, std::string const & title);

        ~Warlock();

        void introduce() const;
        void learnSpell(ASpell * spell);
        void forgetSpell(std::string spellname);

        void launchSpell(std::string spellname, ATarget const & target);
};