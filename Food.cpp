#include "Food.h"

Food::Food(int pr_bre, int pr_din, int ac_br, int ac_di)
{
	setPrice_break(pr_bre);
	setPrice_din(pr_din);
	setAc_bre(ac_br);
	setAc_din(ac_di);
}

string Food::get_break()
{
	return breakfast;
}

string Food::get_din()
{
	return dinner;
}

void Food::setPrice_break(int pr_bre)
{
	price_break = pr_bre;
}

int Food::getPrice_break()
{
	return price_break;
}

void Food::setPrice_din(int pr_din)
{
	price_din = pr_din;
}

int Food::getPrice_din()
{
	return price_din;
}

void Food::setAc_bre(int ac_b)
{
	ac_bre = ac_b;
}

void Food::setAc_din(int ac_d)
{
	ac_din = ac_d;
}

double Food::calcCost()
{
	double temp;
	temp = (ac_din * price_din) + (ac_bre * price_break);
	return temp;
}

void Food::clear_f()
{
	ac_bre = 0;
	ac_din = 0;
}
