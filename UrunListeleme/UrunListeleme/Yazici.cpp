#include "Yazici.h"
#include "pch.h"

Yazici::Yazici(string name, string no, double price, string brand, string type, string tech, float pSpeed, string resolution, int rCapacity, bool isColor)
{
	Name = name;
	No = no;
	Price = price;
	Brand = brand;
	Type = type;
	Tech = tech;
	PSpeed = pSpeed;
	Resolution = resolution;
	RCapacity = rCapacity;
	IsColor = isColor;
}
Yazici::~Yazici()
{
}