#include "Customer.h"
#include <iostream>
#include <string>
using namespace std;

Customer::Customer(string nam, string lastn, string who, int phone)
{
	setName(nam);
	setLast(lastn);
	setSex(who);
	setNum(phone);
}

void Customer::setName(string name1)
{
	name = name1;
}

string Customer::getName()
{
	return name;
}

void Customer::setLast(string lastn)
{
	lastname = lastn;
}

string Customer::getLast()
{
	return lastname;
}

void Customer::setSex(string who)
{
	sex = who;
}

string Customer::getSex()
{
	return sex;
}

void Customer::setNum(int phon)
{
	number = phon;
}

int Customer::getNum()
{
	return number;
}

void Customer::clear_cust()
{
	name = "";
	lastname = "";
	sex = "";
	number = 0;
}


ostream& operator<<(ostream& output, Customer& info)
{
	output << "Name:\t\t" << info.getName() << "\n"
		<< "Last Name:\t" << info.getLast() << "\n"
		<< "Sex:\t\t" << info.getSex() << "\n"
		<< "Phone Number:\t" << info.getNum() << "\n";
	return output;
}

istream& operator>>(istream& input, Customer& info)
{
	input >> info.name;
	input.ignore();
	input >> info.lastname;
	input.ignore();
	input >> info.sex;
	input.ignore();
	input >> info.number;
	return input;
}