#pragma once
#include<iostream>
#include<fstream>
#include <cstdlib>  //required for rand(), srand()
#include <ctime> 
//#include "E_Transaction.h"
//#include "BankTransfer.h"
//#include "PayPak.h"
//#include "JazzCash.h"
//#include "EasyPaisa.h"


using namespace std;


class Payment
{
protected:

	//E_Transaction *eptr;
	//BankTransfer * bptr;


	double T_id;
	double item_balance;
	double Customer_balance;
	double charges;
	double returns;
	double deductions;

public:

	Payment(double T_id = 0, double charges = 0, double returns = 0, double deductions = 0, double item_balance = 0
		, double Customer_balance = 0) : T_id(T_id), charges(charges), returns(returns),
		deductions(deductions), item_balance(item_balance), Customer_balance(Customer_balance)

	{
		this->T_id = 12.93;
		this->item_balance = 12313.2;
		this->Customer_balance = 123.123;
		this->charges = 4433.2;
		this->returns = 33442.2;
		this->deductions = 223341.9;
	}



	int Random()
	{
		srand(time(0));     //randomizing results... (using time as an input)

		int x;
		int genete = rand();
		const int totalNumbersGenerated = 30;
		bool numb_i = false;
		const int minRange = 1, maxRange = 20000;

		numb_i = true;
		// random number 
		x = ((rand() % maxRange) + minRange - 1);

		return x;
	}

	void cal_Charges(int mode)
	{
		bool e = true;


		if ((mode == 1) && e)
			charges = charges;
		else if (mode == 2)
			charges = (70 * charges) / 100.0;
	}




	void transcation()
	{

		cout << "The Amount of  " << Random() << "  has been deducted to your Account" << endl;
		cout << "The Amount is  " << Random() << endl << endl;
		cout << " The Amount of " << Random() << "is added to the store's revenue " << endl;
	}

	virtual void recharge()
	{

	}
	virtual void Bill()
	{

	}

	void Menu() {
		cout << "Please Enter you Method of Payment  " << endl;
		cout << "Press 1 for Bank Transfer " << endl;
		cout << "Press 2 for the E Transactions" << endl;
		cout << "Press 3 for the COD" << endl;
		int key = 0;
		cin >> key;
		if (key == 1) {
			//	bptr = new PayPak;
			transcation();

		}if (key == 2) {
			cout << "Please Enter you Method of Payment  " << endl;
			cout << "Press 1 for Easy Paisa " << endl;
			cout << "Press 2 for JAzz Cash  " << endl;
			cin >> key;
			if (key == 1) {
				//eptr = new EasyPaisa;
				transcation();
				//eptr->Bill();
			}
			if (key == 2) {
				//	eptr = new JazzCash;
				transcation();
				//	eptr->Bill();

			}


		}
		if (key == 3) {
			string city;
			cout << " Enter your city ";
			cin >> city;
			if (city == "islamabad") {
				cout << " Your total amount is with dc :" << Random() + 30 << " is deducted from your account " <<  endl;
			}
			else if ((city == "lahore") || (city == "karachi")) {
				cout << " Your total amount is with dc :" << Random() + 60 << " is deducted from your account " << endl;
			}
		}


	}



};

