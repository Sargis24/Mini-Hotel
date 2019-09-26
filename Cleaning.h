#ifndef CLEANING_H
#define CLEANING_H

#include <iostream>
#include <string>

using namespace std;

class Cleaning
{
private:
	int price;
	int ac_clean;
public:
	Cleaning(int = 10, int = 0);
	void setPrice(int);
	int getPrice();
	void setAc_clean(int);
	virtual double calcCost();
	void clear_cl();
};

#endif