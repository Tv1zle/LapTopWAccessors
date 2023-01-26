#pragma once
class CPU
{
	char* name = nullptr;
	double Ghz;
	double price;
public:
	CPU(const CPU& c);
	CPU(const char* n);
	CPU(const char* n, int m);
	CPU(const char* n, int m, double r);

	~CPU();
	void Input();
	void Print();

	// get
	const char* GetName()const;
	const int GetGhz()const;
	double GetPrice()const;

	// set
	void SetName(const char* n);
	void SetGhz(double ghz);
	void SetPrice(double pr);
};

