#pragma once

#include<iostream>
#include"Payment.h"
using namespace std;

class Bank: public Payment
{
	char bankName[20];
	char accountNumber[20];
	int balance;
public:
	//--------------------------------------Constructors----------------------------------------------
	Bank() {
		for (int i = 0; i < 20; i++) {
			this->bankName[i] = '\0';
			this->accountNumber[i] = '\0';
		}
		balance = 3500;
	}
	Bank(string bank, string acc,int y) {
		strcpy_s(this->bankName, bank.c_str()); 
		strcpy_s(this->accountNumber, acc.c_str()); 
		this->balance = y;
	}
	//--------------------------------------Setters----------------------------------------------
	void setbankName(string bak) {
		strcpy_s(this->bankName, bak.c_str());
	}
	void setaccountNumber(string acc) {
		strcpy_s(this->accountNumber, acc.c_str());
	}
	void setBalance(int y) {
		this->balance = y;
	}

	//--------------------------------------Getters----------------------------------------------
	string getbankName() {
		return this->bankName;
	}
	string grtaccountNumber() {
		return this->accountNumber;
	}
	int getBbalance() {
		return this->balance;
	}
	//--------------------------------------Functions----------------------------------------------
	void makeBpayment() {
		string alo;
		cout << "		Please Enter Bank Name (United , Mezan , Allied) 		" << endl;
		cin >> alo;
		setbankName(alo);
		cout << "		Please Enter your Account Number		" << endl;
		cin >> alo;
		setaccountNumber(alo);

	}
	void addMoney() {
		cout << "		Please Enter Bank Name (EasyPaisa , Nayapay , Sadapay) 		" << endl;
		string alo;
		cin >> alo;
		setbankName(alo);
		cout << "		Please Enter your Account Number		" << endl;
		cin >> alo;
		setaccountNumber(alo);
		cout << "			Please Enter the Amount to add in Account" << endl;
		int h = 0;
		cin >> h;
		h += getBbalance();
		setBalance(h);
	}

};
