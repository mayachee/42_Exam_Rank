
#pragma once
#include <iostream>
#include "./ATarget.hpp"

class ATarget;

class ASpell
{
    protected:
        std::string name;
        std::string effects;

    public:
        std::string getName() const
        {
            return (name);
        }

        std::string getEffects() const
        {
            return (effects);
        }

        virtual ASpell * clone() const = 0;

        ASpell()
        {

        }
        virtual ~ASpell()
        {

        }
        ASpell(std::string name, std::string effects) : name(name), effects(effects)
        {

        }

        ASpell(ASpell const & obj)
        {
            *this = obj;
        }

        ASpell & operator=(ASpell const &obj)
        {
            name = obj.getName();
            effects = obj.getEffects();

            return (*this);
        }

        void launch(ATarget const & target) const
        {
            target.getHitBySpell(*this);
        }
        
};
