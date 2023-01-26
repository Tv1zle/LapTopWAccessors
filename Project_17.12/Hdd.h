#pragma once // файл дизайна
class Hdd
{
	char* name = nullptr;
	int memory;
	double price;
public:
	Hdd(const Hdd& h);
	Hdd(const char* n);
	Hdd(const char* n, int m);
	Hdd(const char* n, int m, double r);
	~Hdd();
	void Input();
	void Print();
	// get
	const char* GetName()const;
	const int GetMemory()const;
	double GetPrice()const;

	// set
	void SetName(const char* n);
	void SetPrice(double pr);
};

