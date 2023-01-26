#include<iostream>
#include "LapTop.h"


LapTop::LapTop(const char* n, RAM& r, CPU& c, VideoCard& v, Hdd& h, double p):Ram(r), Cpu(c), Videocard(v), HDD(h), price(p)
{
	this->name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);
}


LapTop::LapTop(const LapTop& lp):Ram(lp.Ram), Cpu(lp.Cpu), Videocard(lp.Videocard), HDD(lp.HDD), price(lp.price)
{
	this->name = new char[strlen(lp.name) + 1];
	strcpy_s(this->name, strlen(lp.name) + 1, lp.name);
}


LapTop::~LapTop()
{
	delete[]name;
}


void LapTop::Print()
{
	std::cout << "Name: " << name << std::endl
		<< "RAM: " << Ram.GetName() << std::endl
		<< "CPU: " << Cpu.GetName() << std::endl
		<< "HDD: " << HDD.GetName() << std::endl
		<< "GPU: " << Videocard.GetName() << std::endl
		<< "Price: " << price << std::endl;
}


const char* LapTop::GetName()const
{
	return name;
}


double LapTop::GetPrice()const
{
	return price;
}


void LapTop::SetName(const char* n)
{
	if (name != nullptr)
		delete[] name;

	this->name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);
}


void LapTop::SetPrice(double p)
{
	price = p;
}