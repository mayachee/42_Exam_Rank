#include "TargetGenerator.hpp"

void TargetGenerator::learnTargetType(ATarget* target)
{
    if (target)
    {
        targetbook[target->getType()] = target->clone();
    }
}
void TargetGenerator::forgetTargetType(std::string const &nametarget)
{
    if (targetbook.find(nametarget) !=
        targetbook.end())
        {
            targetbook.erase(targetbook.find(nametarget));   
        } 
}

ATarget* TargetGenerator::createTarget(std::string const &nametarget)
{
    ATarget * tmp = NULL;

    if (targetbook.find(nametarget) !=
            targetbook.end())
    {
        tmp = targetbook[nametarget];
    }
    return (tmp);
}

TargetGenerator::TargetGenerator()
{

}
TargetGenerator::~TargetGenerator()
{

}

TargetGenerator::TargetGenerator(TargetGenerator const & obj)
{
    *this = obj;
}
TargetGenerator & TargetGenerator::operator=(TargetGenerator const & str)
{
    targetbook = str.targetbook;
    return (*this);
}