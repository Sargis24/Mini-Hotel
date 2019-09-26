#include "Room.h"

Room::Room(int price_br, int price_di, int ac_br, int ac_d,
	string cus_na, string cus_last, string cus_sex, int cus_num,
	int cle_price, int ac_clean, int day):
	Customer(cus_na, cus_last, cus_sex, cus_num)
{
	Food(price_br, price_di, ac_br, ac_d);
	Cleaning(cle_price, ac_clean);
	days = day;
}
Room::Room(Customer cus, Food food1, Cleaning cle1, int day)
	:cust(cus), cle(cle1), eat(food1), days(day)
{
}
void Room::clear()
{
	cust.clear_cust();
	eat.clear_f();
	cle.clear_cl();
	days = 0;
}

void Room::print(int num)
{
	cout << "Room Statement:" << endl;
	cout << cust;
	cout << "Staying " << days << " days" << endl;
	cout << fixed << setprecision(2);
	cout << "Price for the room: $" << days*base << endl;
	cout << "Price for Cleaning: $" << days*cle.calcCost() << endl;
	cout << "Price for Breakfast and Dinner: $" << days*eat.calcCost() << endl;
	cout << "Total price is: $"<< calcCost() << endl;

}

double Room::calcCost()
{
	return (eat.calcCost() + cle.calcCost() + base)*days;
}
