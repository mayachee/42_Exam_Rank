
#pragma once
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
    private:
        TargetGenerator &operator=(TargetGenerator const &target);
        TargetGenerator(TargetGenerator const &target);
        std::map<std::string, ATarget *> targetlbook;

    public:
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget*);
        void forgetTargetType(std::string const &targetname);
        ATarget* createTarget(std::string const &targetname);
};
