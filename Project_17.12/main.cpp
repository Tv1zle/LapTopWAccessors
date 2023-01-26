#include<iostream>
#include"Hdd.h"
#include"CPU.h"
#include"VideoCard.h"
#include"RAM.h"
#include"LapTop.h"
using namespace std;

int main()
{
	Hdd hdd("Asus", 1000, 2500);
	VideoCard gpu("Nvidia RTX 2080", 6, 14000);
	CPU cpu("Intel core i7", 3.6, 16000);
	RAM ram("Kingston", 16, 3200);
	LapTop lp("Samsung", ram, cpu, gpu, hdd, 4000);
	lp.Print();
}

