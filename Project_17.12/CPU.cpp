#include "CPU.h"
#include<iostream>


CPU::CPU(const CPU& c) :Ghz(c.Ghz), price(c.price)
{
	this->name = new char[strlen(c.name) + 1];
	strcpy_s(this->name, strlen(c.name) + 1, c.name);
}


CPU::CPU(const char* n)
{
	this->name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);
}


CPU::CPU(const char* n, int m):CPU(n)
{
	this->name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);
	Ghz = m;
}


CPU::CPU(const char* n, int m, double r):CPU(n, m)
{
	this->name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);
	Ghz = m;
	price = r;
}


CPU::~CPU()
{
	delete[]name;
}


void CPU::Input()
{
	char buff[20];
	std::cout << "Enter name -> ";
	std::cin.getline(buff, 20);
	this->name = new char[strlen(buff) + 1];
	strcpy_s(this->name, strlen(buff) + 1, buff);
	std::cout << "Enter price -> ";
	std::cin >> price;
}


void CPU::Print()
{
	std::cout << "Name: " << name << std::endl
		<< "Price: " << price << std::endl
		<< "Ghz: " << Ghz << std::endl;
}


const char* CPU::GetName()const
{
	return name;
}


const int CPU::GetGhz()const
{
	return Ghz;
}


double CPU::GetPrice()const
{
	return price;
}


void CPU::SetName(const char* n)
{
	if (name != nullptr)
		delete[] name;

	this->name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);
}


void CPU::SetGhz(double ghz)
{
	Ghz = ghz;
}


void CPU::SetPrice(double pr)
{
	price = pr;
}