#include "Hdd.h" //файл реализации
#include<iostream>
using namespace std;


Hdd::Hdd(const Hdd& h) :memory(h.memory), price(h.price)
{
	this->name = new char[strlen(h.name) + 1];
	strcpy_s(this->name, strlen(h.name) + 1, h.name);
}


Hdd::Hdd(const char* n)
{
	this->name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);
}


Hdd::Hdd(const char* n, int m):Hdd(n)
{
	this->name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);
}


Hdd::Hdd(const char* n, int m, double r):Hdd(n, m)
{
	this->name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);
	price = r;
}


Hdd::~Hdd()
{
	delete[]name;
}


void Hdd::Input()
{
	char buff[20];
	cout << "Enter name -> ";
	cin.getline(buff, 20);
	this->name = new char[strlen(buff) + 1];
	strcpy_s(this->name, strlen(buff) + 1, buff);
	cout << "Enter price -> ";
	cin >> price;
}


void Hdd::Print()
{
	cout << "Name: " << name << endl
		 << "Price: " << price << endl
		 << "Memory: " << memory << endl;
}


const char* Hdd::GetName()const
{
	return name;
}


const int Hdd::GetMemory()const
{
	return memory;
}


double Hdd::GetPrice()const
{
	return price;
}


void Hdd::SetName(const char* n)
{
	if (name != nullptr)
		delete[] name;
	
	this->name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);
}


void Hdd::SetPrice(double pr)
{
	price = pr;
}