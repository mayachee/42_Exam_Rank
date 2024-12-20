
#pragma once
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    protected:
        std::string type;

    public:
        std::string  getType() const;

        ATarget(ATarget const & str);
        ATarget & operator=(ATarget const & str);
        ATarget(std::string type);
        virtual ~ATarget();
        virtual ATarget * clone() const = 0;

        void getHitBySpell(ASpell const & spell) const;
};
