#include "Services.h"

Services::Services(int day, int cle, int food_b, int food_d)
{
	setDays(day);
	setAc_clean(cle);
	setAc_bre(food_b);
	setAc_din(food_d);
}

void Services::setDays(int d)
{
	days = d;
}

int Services::getDays()
{
	return days;
}

double Services::calcCost()
{
	double temp;
	temp = days * (Cleaning::calcCost() + Food::calcCost());
	return temp;
}