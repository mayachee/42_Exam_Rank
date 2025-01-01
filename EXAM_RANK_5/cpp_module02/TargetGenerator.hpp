
#pragma once
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
    private:

        TargetGenerator(TargetGenerator const & src)
        {
            *this = src;
        }

        TargetGenerator & operator=(TargetGenerator const & src)
        {
            _target = src._target;
            return (*this);
        }
        std::map < std::string, ATarget*> _target;
        
    public:
        void learnTargetType(ATarget *target)
        {
            if (target)
            {
                _target[target->getType()] = target;
            }

        }

        void forgetTargetType(std::string const &type)
        {
            if (_target.find(type) !=
                    _target.end() )
            {
                _target.erase(_target.find(type));
            }  
        }

        ATarget* createTarget(std::string const &type)
        {
            ATarget *tmp = NULL;

            if (_target.find(type) != _target.end() )
            {
                tmp = _target[type];
            }  
            return (tmp);
        }

        TargetGenerator()
        {

        }

        ~TargetGenerator()
        {

        }
};
