#pragma once
#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <fstream>
#include "Inventory.h"
#include "Payment.h"
#include "grocery.h"
using namespace std;

class cart {

	Payment p;
	Inventory in;
	char name[100];
	char item1[100];
	char item2[100];
	Feedback f;
public:
	void setname(string first) {
		strcpy_s(this->name, first.c_str());
	}
	void setitem1(string first) {
		strcpy_s(this->item1, first.c_str());
	}

	void setitem2(string first) {
		strcpy_s(this->item2, first.c_str());
	}
	//===============================================================//

	void Write(cart obj, string fileName)
	{
		ofstream myFile(fileName, ios::binary | ios::app);
		myFile.write((char*)&obj, sizeof(obj));
		myFile.close();
	}
	//==============================================================//

	void display() {

		cout << " Name " << name << endl;
		cout << " item 1 " << item1 << endl;
		cout << " item 2 " << item2 << endl;
	}




	//=============================================================//
	void addCart() {
		string r,n,d;

		cout << "Enter the item you want to purchase" << endl;
		cout << " As a new mamber you are allowed to select 2 things" << endl;

		cout << "Enter your name " << endl;
		cin >> n;
		//setname(r);*/


		cout << "Enter item 1 " << endl;
		cin >> r;
	//	setitem1(r);
		cout << "Enter item 2 " << endl;
		cin >> d;
		//setitem2(r);
		system("cls");
	o:
		
		cout << "Press 1 to move to the Payment "<<endl;
		cout << "Press 2 to go to cart Again" << endl;
		cout << "Pree 3 to Return " << endl;
		cout << "Press 4 to display Cart" << endl;
		int key = 0;
		cin >> key;
		if (key == 1) {

			p.Menu();
			f.Menu();
		//	Write(*this, "Cart.txt");
		}if (key == 2) {
			addCart();
		}if (key == 3) {
			return;
		}

		if(key==4) {
			cout << " Name is " << n << endl;
			cout << "Item 1 " << r << endl;
			cout << "Item 2" << d<<endl;
			goto o;
		}
	}
	void Menu() {
		cout << "Welcome to Online Shopping" << endl;
		in.inventOnline();
		addCart();

	

	}

};







class Online_Shopping {
public:
	cart c;
	void menu() {
		c.Menu();
	}




};


