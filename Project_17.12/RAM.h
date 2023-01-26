#pragma once
class RAM
{
	char* name = nullptr;
	int memory;
	double price;
public:
	RAM(const char* n);
	RAM(const char* n, int m);
	RAM(const char* n, int m, double r);
	RAM(const RAM& r);
	~RAM();
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

