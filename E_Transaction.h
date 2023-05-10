#pragma once

#include<iostream>
#include"Payment.h"
using namespace std;

class E_transaction:public Payment
{
	char companyName[20];
	char phonenumber[20];
	int balance;
public:
	//--------------------------------------Constructor----------------------------------------------
	E_transaction() {
		for (int i = 0; i < 20; i++) {
			this->companyName[i] = '\0';
			this->phonenumber[i] = '\0';
		}
		this->balance=3500;
	}
	E_transaction(string com, string phone,int y) {
		strcpy_s(this->companyName, com.c_str());
		strcpy_s(this->phonenumber, phone.c_str());  
		this->balance=y;
	}
	//--------------------------------------Setter----------------------------------------------
	void setcompanyName(string com) {
		strcpy_s(this->companyName, com.c_str());
	}
	void setphoneNumber(string phone) {
		strcpy_s(this->phonenumber, phone.c_str());
	}
	void setBalance(int y) {
		this->balance = y;
	}
	//--------------------------------------Getter----------------------------------------------
	string getcompanyName() {
		return this->companyName;
	}
	string getphoneNumber() {
		return this->phonenumber;
	}
	int getEbalance() {
		return this->balance;
	}
	//--------------------------------------Functions----------------------------------------------
	void makeEpayment() {
		cout << "		Please Enter Company Name (EasyPaisa , Nayapay , Sadapay) 		" << endl;
		string alo;
		cin >> alo;
		setcompanyName(alo);
		cout << "		Please Enter your Phone Number		" << endl;
		cin >> alo;
		setphoneNumber(alo);
	}
	void addEMoney() {
		cout << "		Please Enter Company Name (EasyPaisa , Nayapay , Sadapay) 		" << endl;
		string alo;
		cin >> alo;
		setcompanyName(alo);
		cout << "		Please Enter your Phone Number		" << endl;
		cin >> alo;
		setphoneNumber(alo);
		cout << "			Please Enter the Amount to add in Account" << endl;
		int h = 0;
		cin >> h;
		h += getEbalance();
		setBalance(h);
	}
};


