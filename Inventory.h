#pragma once
#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <fstream>
#include "Manger.h"
using namespace std;



class store {
public:
	char item1[100];
	char item2[100];
	char item3[100];
	char item4[100];
	char item5[100];
	virtual void add() {


	}
	virtual void del(string item) {

	}
	virtual void search() {

	}


	virtual void dispMenu() {

	}

};


class Islamabad:public store {
public:
	

	void setitem1(string first) {
		strcpy_s(this->item1, first.c_str());
	}
	void setitem2(string first) {
		strcpy_s(this->item2, first.c_str());
	}
	void setitem3(string first) {
		strcpy_s(this->item3, first.c_str());
	}
	void setitem4(string first) {
		strcpy_s(this->item4, first.c_str());
	}

	void setitem5(string first) {
		strcpy_s(this->item5, first.c_str());
	}

	//================================================//
	void Write(Islamabad obj, string fileName)
	{
		ofstream myFile(fileName, ios::binary | ios::app);
		myFile.write((char*)&obj, sizeof(obj));
		myFile.close();
	}



	virtual void add() {
		string s;
		cout << "Enter your 1st Item " << endl;
		cin >> s;
		setitem1(s);
		cout << "Enter your 2nd Item " << endl;
		cin >> s;
		setitem2(s);
		cout << "Enter your 3rd Item " << endl;
		cin >> s;
		setitem3(s);
		cout << "Enter your 4th Item " << endl;
		cin >> s;
		setitem4(s);
		cout << "Enter your 5th Item " << endl;
		cin >> s;
		setitem5(s);
		cout << "Your items has been added" << endl;
		Sleep(5000);
		Write(*this, "Islamabad.bin");
	}
	virtual void search() {
		string s;
		cout << "Enter your  Item to search " << endl;
		cin >> s;
		if ((s.compare(this->item1)==0)|| (s.compare(this->item2) == 0) || (s.compare(this->item3) == 0)|| (s.compare(this->item4) == 0) || (s.compare(this->item5) == 0)) {
			cout << " it is available!" << endl;
		}
		else
			cout << "Not Available!" << endl;

		ifstream file("Islamabad.bin", ios::out | ios::in | ios::binary);
		while (file.read((char*)&*this, sizeof(Islamabad)))
		{
			this->display();
		}
		file.close();
	}

	virtual void dispMenu() {
		ifstream file("Islamabad.bin", ios::out | ios::in | ios::binary);
		file.read((char*)&*this, sizeof(Islamabad));

		this->display();
		file.close();
	}
	virtual void del(string item) {
		string h = "Not Availibale"  ;

		if (item.compare(item1) == 0) {
			setitem1(h);
		}if (item.compare(item2) == 0) {
			setitem2(h);
		}if (item.compare(item3) == 0) {
			setitem3(h);
		}if (item.compare(item4) == 0) {
			setitem4(h);
		}if (item.compare(item5) == 0) {
			setitem5(h);
		}


		display();

	}

	virtual void display() {
			cout << "Item  1  " << item1 << endl;
			cout << "Item  2  " <<item2 << endl;
			cout << "Item  3  " <<item3 << endl;
			cout << "Item  4  " <<item4 << endl;
			cout << "Item  5  " << item5 << endl; cout << endl;
			Sleep(5000);
			system("cls");
	}



};

class Lahore:public store {
public:

	void setitem1(string first) {
		strcpy_s(this->item1, first.c_str());
	}
	void setitem2(string first) {
		strcpy_s(this->item2, first.c_str());
	}
	void setitem3(string first) {
		strcpy_s(this->item3, first.c_str());
	}
	void setitem4(string first) {
		strcpy_s(this->item4, first.c_str());
	}

	void setitem5(string first) {
		strcpy_s(this->item5, first.c_str());
	}

	//================================================//
	void Write(Lahore obj, string fileName)
	{
		ofstream myFile(fileName, ios::binary | ios::app);
		myFile.write((char*)&obj, sizeof(obj));
		myFile.close();
	}



	virtual void add() {
		string s;
		cout << "Enter your 1st Item " << endl;
		cin >> s;
		setitem1(s);
		cout << "Enter your 2nd Item " << endl;
		cin >> s;
		setitem2(s);
		cout << "Enter your 3rd Item " << endl;
		cin >> s;
		setitem3(s);
		cout << "Enter your 4th Item " << endl;
		cin >> s;
		setitem4(s);
		cout << "Enter your 5th Item " << endl;
		cin >> s;
		setitem5(s);
		cout << "Your items has been added" << endl;
		Sleep(5000);
		Write(*this, "Lahore.bin");
	}
	virtual void search() {
		string s;
		cout << "Enter your  Item to search " << endl;
		cin >> s;

		ifstream file("Lahore.bin", ios::out | ios::in | ios::binary);
		while (file.read((char*)&*this, sizeof(Lahore)))
		{
			this->display();
		}
		file.close();
	}

 virtual void dispMenu() {
		ifstream file("Lahore.bin", ios::out | ios::in | ios::binary);
		file.read((char*)&*this, sizeof(Lahore));

		this->display();
		file.close();
	}

 virtual void del(string item) {
	 string h = "Not Availibale";

	 if (item.compare(item1) == 0) {
		 setitem1(h);
	 }if (item.compare(item2) == 0) {
		 setitem2(h);
	 }if (item.compare(item3) == 0) {
		 setitem3(h);
	 }if (item.compare(item4) == 0) {
		 setitem4(h);
	 }if (item.compare(item5) == 0) {
		 setitem5(h);
	 }

	 display();


 }
	virtual void display() {
		cout << "Item  1  " << item1 << endl;
		cout << "Item  2  " << item2 << endl;
		cout << "Item  3  " << item3 << endl;
		cout << "Item  4  " << item4 << endl;
		cout << "Item  5  " << item5 << endl; cout << endl;
		Sleep(5000);
		system("cls");
	}



};

class Karachi:public store {

	void setitem1(string first) {
		strcpy_s(this->item1, first.c_str());
	}
	void setitem2(string first) {
		strcpy_s(this->item2, first.c_str());
	}
	void setitem3(string first) {
		strcpy_s(this->item3, first.c_str());
	}
	void setitem4(string first) {
		strcpy_s(this->item4, first.c_str());
	}

	void setitem5(string first) {
		strcpy_s(this->item5, first.c_str());
	}

	//================================================//
	void Write(Karachi obj, string fileName)
	{
		ofstream myFile(fileName, ios::binary | ios::app);
		myFile.write((char*)&obj, sizeof(obj));
		myFile.close();
	}



	virtual void add() {
		string s;
		cout << "Enter your 1st Item " << endl;
		cin >> s;
		setitem1(s);
		cout << "Enter your 2nd Item " << endl;
		cin >> s;
		setitem2(s);
		cout << "Enter your 3rd Item " << endl;
		cin >> s;
		setitem3(s);
		cout << "Enter your 4th Item " << endl;
		cin >> s;
		setitem4(s);
		cout << "Enter your 5th Item " << endl;
		cin >> s;
		setitem5(s);
		cout << "Your items has been added" << endl;
		Sleep(5000);

		Write(*this, "Karachi.bin");
	}
	virtual void search() {
		string s;
		cout << "Enter your  Item to search " << endl;
		cin >> s;

		ifstream file("Karachi.bin", ios::out | ios::in | ios::binary);
		while (file.read((char*)&*this, sizeof(Karachi)))
		{
			this->display();
		}
		file.close();
	}
	virtual void dispMenu() {
		ifstream file("Karachi.bin", ios::out | ios::in | ios::binary);
		file.read((char*)&*this, sizeof(Karachi));
		
			this->display();
		file.close();
	}

	virtual void del(string item) {
		string h = "Not Availibale";

		if (item.compare(item1) == 0) {
			setitem1(h);
		}if (item.compare(item2) == 0) {
			setitem2(h);
		}if (item.compare(item3) == 0) {
			setitem3(h);
		}if (item.compare(item4) == 0) {
			setitem4(h);
		}if (item.compare(item5) == 0) {
			setitem5(h);
		}
		display();
	}


	virtual void display() {
		cout << "Item  1  " << item1 << endl;
		cout << "Item  2  " << item2 << endl;
		cout << "Item  3  " << item3 << endl;
		cout << "Item  4  " << item4 << endl;
		cout << "Item  5  " << item5 << endl; cout << endl;
		Sleep(5000);
		system("cls");
	}


};








class Inventory {
public:
	store* ptr,*tr;
	string s;
	Inventory() {
		ptr = NULL;
		s = "\0";
	}


	Inventory(string e) {
		this->s.assign(e);
	}


	void delo() {
		store* ptr1, * ptr2;
		ptr = new Islamabad;
		ptr1 = new Lahore;
		ptr2 = new Karachi;

		ptr->del(this->s);
			ptr1->del(this->s);
		ptr2->del(this->s);
	}




	void invent() {
		int key = 0;
		cout << "PLease Select your store " << endl;
		cout << "Press 1 for Islamabad " << endl;
		cout << "Press 2 for Lahore" << endl;
		cout << "Press 3 for Karachi" << endl;
		cin >> key;
		if (key == 1) {
		k:
			ptr = new Islamabad;
			cout << "Press 1 for Add items " << endl;
			cout << "Press 2 for Search" << endl;
			cout << "Press 3 for delete" << endl;
			cout << "Press 4 for inventory  again" << endl;
			cout << "Press 5 for Display items in stores" << endl;
			cin >> key;
			if (key == 1) {
				ptr->add();
			}if (key == 2) {
				ptr->search();
			}if (key == 3) {
				ptr->del(s);
			}
				if (key == 4) {
					invent();
				}if (key == 5) {
					ptr->dispMenu();
				}
				else {
					goto k;
				}
			



		}if (key == 2) {
		j:
			ptr == new Lahore;
			cout << "Press 1 for Add items " << endl;
			cout << "Press 2 for Search" << endl;
			cout << "Press 3 for delete" << endl;
			cout << "Press 4 for inventory  again" << endl;
			cout << "Press 5 for Display items in stores" << endl;
			cin >> key;
			if (key == 1) {
				ptr->add();
			}if (key == 2) {
				ptr->search();
				if (key == 4) {
					invent();
				}if (key == 5) {
					ptr->dispMenu();
				}
				else {
					goto j;
				}
			}



		}
		if (key == 3) {
		l:
			ptr = new Karachi;
			cout << "Press 1 for Add items " << endl;
			cout << "Press 2 for Search" << endl;
			cout << "Press 3 for delete" << endl;
			cout << "Press 4 for inventory  again" << endl;
			cout << "Press 5 for Display items in stores" << endl;
			cin >> key;
			if (key == 1) {
				ptr->add();
			}if (key == 2) {
				ptr->search();
				if (key == 4) {
					invent();
				}if (key == 5) {
					ptr->dispMenu();
				}
				else {
					goto l;
				}
			}

		}
		else {
			invent();
		}

	}



	//===========================================================================//
	void inventOnline() {
		int key = 0;
		cout << "PLease Select your store " << endl;
		cout << "Press 1 for Islamabad " << endl;
		cout << "Press 2 for Lahore" << endl;
		cout << "Press 3 for Karachi" << endl;
		cin >> key;
		if (key == 1) {
			goto j;
		k:
			ptr = new Islamabad;
			cout << "Press 1 for Search" << endl;
			cout << "Press 2 for Display items in stores" << endl;
			cout << "Press 3 for inventory  again" << endl;
			cout << "Press 4 for Cart " << endl;
			cin >> key;
			if (key == 1) {
				ptr->search();
			}if (key == 2) {
				ptr->dispMenu();
			}if (key == 3) {
					inventOnline();
				}if (key == 4) {
					goto h;
				}
				else {
					goto k;
				}
			



		}if (key == 2) {
		j:
			ptr == new Lahore;
			cout << "Press 1 for Search" << endl;
			cout << "Press 2 for Display items in stores" << endl;
			cout << "Press 3 for inventory  again" << endl;
			cout << "Press 4 for Cart " << endl;
			cin >> key;
			if (key == 1) {
				ptr->search();
			}if (key == 2) {
				ptr->dispMenu();
			}if (key == 3) {
				inventOnline();
			}if (key == 4) {
				goto h;;
			}
			else {
				goto j;
			}




		} 
		if (key == 3) {
			goto j;
		l:
			tr = new Karachi;
			cout << "Press 1 for Search" << endl;
			cout << "Press 2 for Display items in stores" << endl;
			cout << "Press 3 for inventory  again" << endl;
			cout << "Press 4 for Cart " << endl;
			cout << "Press 5 for again" << endl;
			cin >> key;
			if (key == 1) {
				tr->search();
			}if (key == 2) {
				tr->dispMenu();
			}if (key == 3) {
					inventOnline();
				}if (key == 4) {
					goto h;
				}
				else {
					goto l;
				}
			

		}
		else {
			inventOnline();
		}
	h:
		return;
	}

};
