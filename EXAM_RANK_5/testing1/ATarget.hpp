

#pragma once
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    protected:
        std::string type;
    
    public:
        void getHitBySpell(ASpell const & spell) const
        {
            std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
        }

        std::string getType() const
        {
            return (type);
        }

        virtual ATarget * clone() const = 0;

        ATarget()
        {

        }
        virtual ~ATarget()
        {

        }
        ATarget(std::string type) : type(type)
        {

        }

        ATarget(ATarget const & obj)
        {
            *this = obj;
        }

        ATarget & operator=(ATarget const &obj)
        {
            type = obj.getType();

            return (*this);
        }
};


