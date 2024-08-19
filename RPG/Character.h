#pragma once
#include"Status.h"
#include"ATK.h"
#include"Item.h"
#include<map>
class Character
{
private:
	Status status;
	std::map<std::string, Item>ItemBoxs;
	int Attebute;
	int EXP;
public:
   virtual	ATK Select()abstract;
   int GetHp()const;
   int GetMp()const; 
   int GetAtk()const; 
   int GetDef()const; 
   int GetMdef()const; 
   int GetCri()const; 
   int GetLuck()const;
};

