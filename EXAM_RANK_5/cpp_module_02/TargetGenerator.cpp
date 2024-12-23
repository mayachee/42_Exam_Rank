#include "TargetGenerator.hpp"

void TargetGenerator::learnTargetType(ATarget *target)
{
    if (target)
    {
		_target[target->getType()] = target;
    }

}
void TargetGenerator::forgetTargetType(std::string const &type)
{
    if (_target.find(type) !=
            _target.end() )
    {
        _target.erase(_target.find(type));
    }   
}
ATarget* TargetGenerator::createTarget(std::string const &type)
{
    ATarget *tmp = NULL;

    if (_target.find(type) != _target.end() )
    {
        tmp = _target[type];
    }  
    return (tmp);
}

TargetGenerator::TargetGenerator()
{

}
TargetGenerator::~TargetGenerator()
{

}

TargetGenerator::TargetGenerator(TargetGenerator const & src)
{
	*this = src;
}

TargetGenerator & TargetGenerator::operator=(TargetGenerator const & src)
{
	_target = src._target;
	return (*this);
}
