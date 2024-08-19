#pragma once
#include"Character.h"
#include"Equipment.h"
class Player :
    public Character
{
private:
    int Level;
    int Level_UP_EXP = Level * 10;
    std::map<int, Equipment>equipement;
public:
    void MoveSelect();
    ATK Select()override;
    void LevelUP();
};

