
#pragma once

#include<iostream>
#include"../OOP Final Project/User.h"
#include "OnlineShopping.h"
using namespace std;


class Customer : public User
{

protected:

	bool login_status;
	bool register_status;


public:
	Online_Shopping* on = new Online_Shopping;
	Customer(int id = 0, string username = " ", string password = " ", string CNIC = " ") :User(id, username, password, CNIC)
	{
		login_status = 0;
		bool Validate = 0;
		if (username != " ") {
			Validate = true;
			register_status = true;
		}
		else {
			register_status = false;
		}
	}




	virtual void Menu()
	{
		bool display = true;
		cout << "--------------------------Welcome to the Cutomer Menu------------------" << endl;
		cout << endl;
		cout << endl;
		cout << "		Please Enter your Choices    " << endl << endl;
		cout << "			1.Login" << endl;
		cout << "			2.Registration" << endl;
		cout << "			3.Return to Main Menu " << endl;

		cout << "========================================================================" << endl;

		cout << " Enter you Choice ";
		int Choice;
		cin >> Choice;
		bool registraion_r_status = false;
		switch (Choice)
		{
		case 1:
			login();
			break;
		case 2:
			registraion_r_status = true;
			registration();
			break;
		case 3:
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

	void Write(Customer obj, string fileName)
	{
		ofstream myFile(fileName, ios::binary | ios::app);
		myFile.write((char*)&obj, sizeof(Customer));
		myFile.close();
	}
	virtual void registration()
	{
		string fileName = "Customer.bin";
		string password1;
		string CNIC;
		bool my_check;
		int id;
		string username;
		bool log_check;
		string password;




		cout << endl << endl << "-----------------------REGISTRAION PROCESS--------------------------" << endl << endl;

		cout << "Enter an ID(Integer Value): ";
		cin >> id; //Prevent Id from Causing trouble 


		cin.clear();

		cout << "Enter the username: ";
		cin >> username;

		cout << "Enter the Password: ";
		cin >> password;

		cout << "Enter the Password Again: ";
		cin >> password1;

		while (password != password1)
		{
			cout << "Passwords Should Match, Please Try Again: ";
			cin >> password1;
		}

		cout << "Enter the CNIC(13-Digit): ";
		cin >> CNIC;

		while (CNIC.size() > 13)
		{
			cout << endl << "INVALID ENTRY! Please Enter a 13-Digit-CNIC number: ";
			cin >> CNIC;
		}

		cout << "--------------------------------Registration Complete--------------------------------------" << endl;
		register_status = 1;

		Customer temp(id, username, password, CNIC);

		Write(temp, fileName);

		cin.clear();
		cin.ignore(10000, '\n');
		system("Pause");
		system("cls");

		Menu();


	}


	virtual void display()
	{
		cout << "---------" << endl << id << endl << username << endl << password << endl
			<< CNIC << endl << "-------------" << endl;
	}

	virtual void getObject(string username, string password)
	{
		string fileName = "Customer.bin";
		Customer temp;
		ifstream myFile(fileName, ios::binary);
		while (myFile.read((char*)&temp, sizeof(temp)))
		{
			if ((temp.username == username) && (temp.password == password))
			{
				//temp.getData();
				myFile.close();
				*this = temp;
			}
		}
	}

	virtual void getAllObjects() {

		string fileName = "Customer.bin";
		Customer temp;
		ifstream myFile(fileName, ios::binary);
		while (myFile.read((char*)&temp, sizeof(temp))) {
			temp.display();
			cout << "..." << endl << endl;
		}
		myFile.close();
	}
	void AdminDesktop() {
		cout << "Press 1 for online Shopping " << endl;
		cout << "Press 2 for return " << endl;
		int key = 0;
		cin >> key;

		if (key == 1) {
			on->menu();
			Menu();
		}
		else {
			return
				;
		}





	}









	virtual void login()
	{
		string username;
		string password;
		string fileName = "Customer.bin";

		cout << "Enter the username: ";
		cin >> username;

		cout << "Enter the Password: ";
		cin >> password;

		bool flag = false;

		flag = verify(fileName, username, password);

		if (flag)
		{
			cout << endl << "Welcome Back to Grocery " << endl;
			getObject(username, password);
			display();
			login_status = 1;
			AdminDesktop();
		}

		else
		{
			string tor;

			cout << endl << "Error!" << endl << endl;
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

	}

	virtual bool verify(string fileName, string username, string password)
	{
		Customer temp;
		ifstream myFile(fileName, ios::binary);
		while (myFile.read((char*)&temp, sizeof(temp)))
		{
			bool ham = true;
			// use for verification;
			while (myFile.read((char*)&temp, sizeof(Customer)))
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
	}
		void delProfile() {
			string a;
			cout << "Please Enter the Cnic of the Customer " << endl;
			cin >> a;
			fstream myFile("Customer.bin", ios::in | ios::out | ios::binary);
			ofstream myFile_temp("temp.bin", ios::app | ios::binary);
			while (myFile.read((char*)&(*this), sizeof(this))) {
				if (CNIC == a) {
					myFile_temp.write((char*)&(*this), sizeof(this));
				}
				else {
					cout << "Success!  Deleted." << endl;
				}
			}
			myFile.close();
			myFile_temp.close();
			remove("Customer.bin");
			rename("temp.bin", "Customer.bin");
		}

		
	};
