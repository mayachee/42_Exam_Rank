#include "TargetGenerator.hpp"

void TargetGenerator::learnTargetType(ATarget* target)
{
    if (targetlbook.find(target->getType()) ==
        targetlbook.end())
    {
        targetlbook[target->getType()] = target->clone();
    }

}

void TargetGenerator::forgetTargetType(std::string const &targetname)
{
    if (targetlbook.find(targetname) !=
        targetlbook.end())
    {
        delete targetlbook[targetname];
        targetlbook.erase(targetlbook.find(targetname));
    }
}
ATarget* TargetGenerator::createTarget(std::string const &targetname)
{
    ATarget * target = NULL;


	// if (targetlbook.find(targetname) != targetlbook.end())
	// 	targetlbook[targetname]->launch(target);
     if (targetlbook.find(targetname) != targetlbook.end())
     {
        target = targetlbook[targetname];
     }
    return (target);
}

TargetGenerator & TargetGenerator::operator=(TargetGenerator const &target)
{
    targetlbook = target.targetlbook;

    return (*this);
}
TargetGenerator::TargetGenerator(TargetGenerator const &target)
{
     *this = target;
}
TargetGenerator::TargetGenerator()
{

}
TargetGenerator::~TargetGenerator()
{

}