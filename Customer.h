#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>
using namespace std;

class Customer
{
	friend ostream& operator<<(ostream&, Customer&);
	friend istream& operator>>(istream&, Customer&);

private:
	string name;
	string lastname;
	string sex;
	int number;
public:
	Customer(string = "", string = "", string = "", int = 0);
	void setName(string);
	string getName();
	void setLast(string);
	string getLast();
	void setSex(string);
	string getSex();
	void setNum(int);
	int getNum();
	void clear_cust();
};

#endif