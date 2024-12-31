#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    protected:
        std::string name;
        std::string effects;

    public:
        virtual ASpell * clone() const = 0;


        std::string getName() const
        {
            return (name);
        }

        std::string getEffects() const
        {
            return (effects);
        }


        ASpell(ASpell &obj)
        {
            *this = obj;
        }

        ASpell & operator=(ASpell const & str)
        {
            name = str.getName();
            effects = str.getEffects();

            return (*this);   
        }

        ASpell()
        {

        }

        ASpell(std::string name, std::string effects) : name(name), effects(effects)
        {

        }

        virtual ~ASpell()
        {

        }

        void launch(ATarget const & target) const;
};