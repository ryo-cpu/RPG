#pragma once
#include<iostream>
#include<map>
#include"Item.h"
#include"Status.h"
typedef enum Part
{
	Head, UpperBody, Lowr_Body, Foot,Hand
}Part;
class Equipment
{
private:
	int PartPoint;
	Status status; 
	std::string Name;
	
public:
	Item Remove(std::map<std::string, Item>ItemMap, std::map<std::string, Item>&ItemBoxs);

};

