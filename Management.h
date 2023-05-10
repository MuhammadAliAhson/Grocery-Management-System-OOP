
#pragma once

#include<iostream>
#include<fstream>
#include<string>
#include"User.h";
#include"Admin.h"
#include"Manger.h"
#include"Customer.h"
#include"Payment.h"
#include "grocery.h"
using namespace std;

void read() {
	string fileName = "Feedback.bin";
	Feedback temp;
	ifstream myFile(fileName, ios::binary);
	while (myFile.read((char*)&temp, sizeof(temp)))
	{
		//temp.review;
		cout << "------Review-----" << endl;
		cout << temp.review << endl;
		cout << temp.rating << endl;
		/*if ((temp.getName() == username) && (temp.getPassword() == password))
		{
			myFile.close();
			return true;

		}*/
	}

	myFile.close();

}
void Write(Admin* temp, string fileName)
{
	ofstream myFile(fileName, ios::binary | ios::app);
	myFile.write((char*)&*temp, sizeof(*temp));
	myFile.close();
}




class Management
{
private:

	User* ptr;

public:

	Management() :ptr()
	{

	}



	void Menu()
	{

		bool menu = false;
		cout << "-------------------------------Welcome to New Age Grocery System------------------------------" << endl;
		cout << " Please Choose Catagory of the Following " << endl;
		cout << "\t 1.Admin" << endl;
		cout << "\t 2.Manager" << endl;
		cout << "\t 3.Customer" << endl;
		cout << "\t 4.Feedback" << endl;
		cout << "-------------------------------------------------------------------------------" << endl;
		menu = true;

		cout << endl << endl << "Please Select: ";
		int Choice;
		cin >> Choice;
		bool Customer_Log = false;
		bool Manger_Log = false;
		system("cls");

		cout << endl;
		string a = "Ali";
		string b = "Ali";
		switch (Choice)
		{
		case 1:
			
			ptr = new Admin(1, a, b);
			Write(new Admin(1, a, b), "Admin.bin");
			ptr->Menu();
			ptr->getAllObjects();
			if (ptr->get_returnStatus() == 1)
			{
				system("cls");
				Menu();
			}
			break;
		case 2:
			
			ptr = new Manager;
			Manger_Log = true;
			ptr->Menu();
			if (ptr->get_returnStatus() == 1)
			{
				system("cls");
				Menu();
			}
			break;
		case 3:
			
			ptr = new Customer;
			Customer_Log = true;
			ptr->Menu();
			if (ptr->get_returnStatus() == 1)
			{
				system("cls");
				Menu();
			}
			break;

		case 4:
			read();
			Menu();
			break;
			
		}

	}

};

