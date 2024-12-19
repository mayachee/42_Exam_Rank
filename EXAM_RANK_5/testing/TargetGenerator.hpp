
#pragma once
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
    private:
        TargetGenerator(TargetGenerator const & obj);
        TargetGenerator & operator=(TargetGenerator const & str);
        std::map<std::string, ATarget *> targetbook;
    public:
        void learnTargetType(ATarget* target);
        void forgetTargetType(std::string const &nametarget);
        ATarget* createTarget(std::string const &nametarget);
        TargetGenerator();
        ~TargetGenerator();
};
