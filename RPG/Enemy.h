#pragma once
#include "Character.h"
class Enemy :
    public Character
{
public:
    ATK Select()override;
    Enemy Copy();
};

