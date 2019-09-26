#ifndef SERVICES_H
#define SERVICES_H

#include "Food.h"
#include "Cleaning.h"
#include <iostream>
#include <string>
using namespace std;

class Services :
	public Cleaning, public Food
{
private:
	int days;
public:
	Services(int = 0, int = 0, int = 0, int = 0);
	void setDays(int);
	int getDays();
	virtual double calcCost();

};

#endif