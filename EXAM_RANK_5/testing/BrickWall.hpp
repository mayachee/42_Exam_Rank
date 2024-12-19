
#pragma once
#include "ATarget.cpp"

class BrickWall : public ATarget
{
    public:
        BrickWall();
        ~BrickWall();
        ATarget *clone() const;
};
