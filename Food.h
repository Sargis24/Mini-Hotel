#ifndef FOOD_H
#define FOOD_H

#include <iostream>
#include <string>
using namespace std;

class Food
{
private:
	string breakfast = "Full English Breakfast";
	string dinner = "Filet Mignon";
	int price_break;
	int price_din;
	int ac_bre;
	int ac_din;
public:
	Food(int = 10, int = 20, int=0,int=0);
	string get_break();
	string get_din();
	void setPrice_break(int);
	int getPrice_break();
	void setPrice_din(int);
	int getPrice_din();
	void setAc_bre(int);
	void setAc_din(int);
	virtual double calcCost();
	void clear_f();
};

#endif