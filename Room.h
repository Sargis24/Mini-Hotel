#include "Services.h"
#include "Food.h"
#include "Cleaning.h"
#include "Customer.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Room
	:public Services, public Customer
{
private:
	
	int days;
	int base = 50;
	Customer cust;
	Cleaning cle;
	Food eat;
public:
	Room(int price_br = 0, int price_di = 0, int ac_br = 0, int ac_d = 0,
		string cus_na = "", string cus_last = "", string cus_sex = "", int cus_num = 0,
		int cle_price = 0, int ac_clean = 0, int day=0);
	Room(Customer, Food, Cleaning, int);
	void clear();
	void print(int num);
	virtual double calcCost();


};