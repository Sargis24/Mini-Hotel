//Sargis Karapetyan
//CSIS 137
//Final Project
//I tried to make outputs as nice and clear as I could.


#include "Customer.h"
#include "Services.h"
#include "Room.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	char selection;
	double pr_br=10;
	double pr_di=20;
	double clean_price=10;
	int ac_b;
	int ac_d;
	int ac_clean;
	string cus_n;
	string cus_l;
	string cus_s;
	int cus_number;
	int days;

	int room_info;
	const int MAX = 10;
	int room_available[MAX];
	Room rooms[MAX];
	Room *p;
	int counter = 0;

	p = rooms;
	for (int i = 0; i < MAX; i++)
	{
		room_available[i] = 0;
	}

	cout << "Welcome to The Bellagio(replica).\n" << endl;
	cout << "Please enter the prices for extra services for today." << endl
		<< "Breakfast: (Default price is $10)" << endl;
	cin >> pr_br;
	if (pr_br < rooms[0].getPrice_break())
	{
		cout << "The price set to default." << endl;
		pr_br = 10;
	}
	else{}
	cout << "Diner: (Default price is $20)" << endl;
	cin >> pr_di;
	if (pr_di < rooms[0].getPrice_din())
	{
		cout << "The price set to default." << endl;
		pr_br = 20;
	}
	else {}
	cout << "Cleaning fee: (Default price is $10)" << endl;
	cin >> clean_price;
	if (clean_price < rooms[0].getPrice())
	{
		cout << "The price set to default." << endl;
		pr_br = 10;
	}
	else {}
	cout << endl;
	do
	{
		cout <<"The Bellagio Hotel" << endl
			<< "1) Reserve a room" << endl
			<< "2) Room information" << endl
			<< "3) Check out a room" << endl
			<< "4) Quit the program" << endl;
		cout << "Make a selection:";
		cin >> selection;
		while (selection != '1' && selection != '2' && selection != '3' && selection != '4')
		{
			cout << "Wrong selection. Please enter again." << endl;
			cin >> selection;
		}
		cin.ignore();
		if (selection == '1')
		{
			if (counter < 10)
			{
				cout << "\n\nEnter customer's \nName:\t";
				getline(cin, cus_n);
				cout << "Last name:\t";
				getline(cin, cus_l);
				cout << "Sex:\t";
				getline(cin, cus_s);
				cout << "Phone number: (i.e. 123-456-7890)";
				cin >> cus_number;

				cout << "How many nights do you want to stay?\t" ;
				cin >> days;
				cout << fixed;
				cout << "\n\nIn The Belagio(replica) hotel customer chooses"
					<< "\nwhich services he want to add to his room. \nPlease make your selection." << endl
					<< "Do you want to clear your twice a day? Yes-1, No-0\nExtra $" << setprecision(2) << rooms[0].getPrice() << endl;
				cin >> ac_clean;
				cout << "Do you want breakfast in your room? Yes - 1, No - 0\nExtra $" << setprecision(2) << rooms[0].getPrice_break() << endl;
				cin >> ac_b;
				cout << "Do you want diner in your room? Yes - 1, No - 0\nExtra $" << setprecision(2) << rooms[0].getPrice_din() << endl;
				cin >> ac_d;

				cout << "\nPlease enter the room number.\nRoom(s) available: " ;
				for (int k = 0; k < MAX; k++)
				{
					if (room_available[k] == 0)
					{
						cout << k + 1 << " ";
					}
				}
				cin >> room_info;
				while (room_available[room_info-1] != 0)
				{
					cout << "Wrong room number. Enter again." << endl;
					cin >> room_info;
				}


				Customer cust(cus_n, cus_l, cus_s, cus_number);
				Food foo(pr_br, pr_di, ac_b, ac_d);
				Cleaning clea(clean_price, ac_clean);

				Room temp(cust, foo, clea, days);
				*(p + (room_info-1)) = temp;
				room_available[room_info-1] = 1;
				system("cls");
				counter++;
				cout << "Customer registered!\n" << endl;
			}
			else
			{
				cout << "\nSorry The hotel is full.\n" << endl;
			}
		}
		else if (selection == '2')
		{
			cout << "Which room information do you want? (form 1 to 10)" << endl;
			cin >> room_info;
			while (room_info >= 11 || room_info <= 0)
			{
				cout << "Incorect room number. Pleas eneter again." << endl;
				cin >> room_info;
			}
			
			rooms[room_info-1].print(room_info-1);
			system("PAUSE");
			system("CLS");
		}
		else if (selection == '3')
		{
			cout << "Which room do you want to check out? (form 1 to 10)" << endl;
			cin >> room_info;
			while (room_info >= 11 || room_info <= 0)
			{
				cout << "Incorect room number. Pleas eneter again." << endl;
				cin >> room_info;
			}
			rooms[room_info - 1].clear();
			cout << "The room "<< room_info <<" has been checked out." << endl;
			counter--;
			room_available[room_info - 1] = 0;
			system("PAUSE");
			system("CLS");

		}
		else if (selection != '4')
		{
			cout << "Incorect selection. please enter again." << endl;
		}

	} while (selection !='4');
	cout << "Thank you. Have a good day!" << endl;

	system("PAUSE");
	return 0;
}