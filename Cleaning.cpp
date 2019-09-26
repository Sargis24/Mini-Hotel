#include "Cleaning.h"

Cleaning::Cleaning(int pric, int ac_c)
{
	setPrice(pric);
	setAc_clean(ac_c);
}

void Cleaning::setPrice(int pric)
{
	if (pric < 10)
	{
		price = 10;
	}
	else
	{
		price = pric;
	}
}

int Cleaning::getPrice()
{
	return price;
}

void Cleaning::setAc_clean(int ac_c)
{
	ac_clean = ac_c;
}

double Cleaning::calcCost()
{
	double temp;
	temp = ac_clean*price;
	return temp;
}

void Cleaning::clear_cl()
{
	ac_clean = 0;
}
