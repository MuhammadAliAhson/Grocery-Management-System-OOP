#pragma once
#include<iostream>
#include"../OOP Final Project/User.h"
#include "Manger.h"
#include "Customer.h"
#include "Catalog.h"
//#include "feedback.h"
using namespace std;

class Admin :public User
{
	
protected:
	bool register_status;
	catalog cat;
	Manager man;
	Customer cus;
	//Feedback feed;
	bool login_status;


public:

	Admin(int id = 0, string username = " ", string password = " ") :User(id, username, password)
	{
		if (username == " ") {
			register_status = 1;
		}
		else {
			register_status = 0;
		}
		bool constructor = 0;
		strcpy_s(this->username, username.c_str());
		login_status = 0;
		strcpy_s(this->password, password.c_str());
		constructor = true;
	}


	virtual void Menu()
	{
		bool display = true;
		cout << "===========================Welcome to the Admin Menu============================" << endl;
		cout << "			As we All know the Admin is already regiested in the system					 " << endl;
		cout << "							1.Login" << endl;
		cout << "							2.Return to Main Menu " << endl;

		cout << "--------------------------------------------------------------------------------" << endl;

		cout << " Enter you Choice ";
		int Choice;
		cin >> Choice;

		switch (Choice)
		{
		case 1:
			login();
			//Main_Menu();
			return_Status = 1;
			break;
		case 2:
			return_Status = 1;
			break;
		default:
			cout << "You have Entered a wrong input value " << endl << endl;
			cout << "Press Enter Key to Continue the system" << endl;
			Sleep(500);
			system("cls");
			Menu();

		}
	}

	void AdminDesktop() {
		system("cls");
		int key = 0;
		cout << "Welcome to the Shop " << endl;
		cout << "Press 1 to Registor the Manager " << endl;
		cout << "Press 2 to Delete the profile of the Manager " << endl;
		cout << "Press 3 to Delete the profile of the Customer " << endl;
		cout << "Press 4 to go to Catalog of store" << endl;
		
		cout << "Press 5 for main menu" << endl;
		cin >> key;
		if (key == 1) {
			man.registration();
			AdminDesktop();
		}if (key == 2) {
			man.delProfile();
			AdminDesktop();
		}if (key == 3) {
			cus.delProfile();
		}if (key == 4) {
			cat.menu();
		}/*if (key == 5) {
			feed.delProfile();
		}*/
		if (key == 5) {
			return_Status = 1;
			return;
		}

	}
	virtual void getObject(string username, string password)
	{

		Admin temp;
		string fileName = "Admin.bin";
		ifstream myFile(fileName, ios::binary);
		while (myFile.read((char*)&temp, sizeof(Admin)))
		{
			if ((username.compare(temp.username) == 0) && (password.compare(temp.password) == 0))
			{

				myFile.close();
				*this = temp;
			}
		}
	}

	virtual void login()
	{
	
		string username;
		string password;
		system("cls");

		cout << "Enter the username: ";
		cin >> username;
		string fileName = "Admin.bin";
		cout << "Enter the Password: ";
		cin >> password;
		bool jacob;



		bool flag = true;
		jacob = flag;
		flag = verify(fileName, username, password);
		jacob = flag;
		if (jacob)
		{
			cout << endl << "WElCOME " << endl;
			cout << endl << "WE Have Been Waiting for you so long " << endl;
			login_status = 1;
		}

		else
		{
			string tor;

			cout << endl << "Error!" << endl;
			cout << endl << "You have Entered a Wrong input" << endl;
			login_status = 0;



			cout << "If you want to Continue then please press(Y):";
			cin >> tor;

			if (tor == "Y" or tor == "y")
				login();

			else
			{
				cin.clear();
				cout << "RE" << endl;

				system("cls");
				Menu();
			}

		}

		AdminDesktop();

	}

	virtual bool verify(string fileName, string username, string password)
	{
		Admin temp;
		ifstream myFile(fileName, ios::binary);
		while (myFile.read((char*)&temp, sizeof(temp)))
		{
			if ((username.compare(temp.username) == 0) && (password.compare(temp.password) == 0))
			{
				myFile.close();
				return true;

			}
		}

		myFile.close();
		return false;

	}


};

