#pragma once
class VideoCard
{
	char* name = nullptr;
	int memory;
	double price;
public:
	VideoCard(const char* n);
	VideoCard(const char* n, int m);
	VideoCard(const char* n, int m, double r);
	VideoCard(const VideoCard& v);
	~VideoCard();
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

