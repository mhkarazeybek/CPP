#include "Bilgisayar.h"
#include "pch.h"

Bilgisayar::Bilgisayar(string name, string no, double price, string brand, string type, string dType, int dCapacity, string rType, int rCapacity, string pType, float pSpeed, string sType, float sSize)
{
	Name = name;
	No = no;
	Price = price;
	Brand = brand;
	Type = type;
	DType = dType;
	DCapacity = dCapacity;
	RType = rType;
	RCapacity = rCapacity;
	PType = pType;
	PSpeed = pSpeed;
	SType = sType;
	SSize = sSize;
}
Bilgisayar::~Bilgisayar(void)
{
}
