#pragma once

#include"Hdd.h"
#include"CPU.h"
#include"VideoCard.h"
#include"RAM.h"


class LapTop
{
	char* name = nullptr;
	RAM Ram;
	CPU Cpu;
	VideoCard Videocard;
	Hdd HDD;
	double price;
public:
	LapTop(const char* n, RAM& r, CPU& c, VideoCard& v, Hdd& h, double p);
	LapTop(const LapTop& lp);
	~LapTop();
	void Print();

	// get
	const char* GetName()const;
	double GetPrice()const;

	// set
	void SetName(const char* n);
	void SetPrice(double pr);
};

