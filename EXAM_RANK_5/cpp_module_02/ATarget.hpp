#pragma once
#include "ASpell.hpp"

class ASpell;

class ATarget{
    protected:
        std::string type;

    public:

        virtual ATarget * clone() const = 0;

        void getHitBySpell(ASpell const & as) const;


        std::string getType() const
        {
            return (type);
        }

        ATarget(ATarget &obj)
        {
            *this = obj;
        }

        ATarget & operator=(ATarget const & str)
        {
            type = str.getType();

            return (*this);   
        }

        ATarget(std::string type) : type(type)
        {

        }

        virtual ~ATarget()
        {

        }

};