#pragma once
#include<iostream>
#include"../OOP Final Project/User.h"
#include "Inventory.h"
using namespace std;


class Manager :public User
{

protected:
	bool login_status;
	char e_mail[100];
	bool r;
	char location[100];
	double Salary;
	bool register_status;
	int experience;
	char hobby[100];
	double Stars;


public:
	Inventory* man = new Inventory;
	Manager(int id = 0, string username = " ", string password = " ", string CNIC = " ", string location = " "
		, int experience = 0, double Stars = 5) :User(id, username, password, CNIC), experience(experience), Stars(Stars)
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

		strcpy_s(this->location, location.c_str());

	}







	virtual void getObject(string username, string password)
	{

		Manager temp;
		string fileName = "Manager.bin";
		ifstream myFile(fileName, ios::binary);
		while (myFile.read((char*)&temp, sizeof(Manager)))
		{
			if ((username.compare(temp.username) == 0) && (password.compare(temp.password) == 0))
			{

				myFile.close();
				*this = temp;
			}
		}
	}






	int getexperience()
	{
		return experience;

	}

	void setSalary(int Salary)
	{
		this->Salary = Salary;
	}
	void setlocation(string location)
	{
		strcpy_s(this->location, location.c_str());
	}

	string getlocation()
	{
		return location;
	}


	void setexperience(int experience)
	{
		this->experience = experience;
	}
	//==================================//

	void Write(Manager obj, string fileName)
	{
		bool op;
		op = true;


		ofstream myFile(fileName, ios::binary | ios::app);
		if (op);
		myFile.write((char*)&obj, sizeof(obj));

		myFile.close();
	}

	double getSalary()
	{
		return Salary;

	}

	void sete_mail(string e_mail)
	{
		strcpy_s(this->e_mail, e_mail.c_str());
	}

	string gete_mail()
	{
		return e_mail;
	}
	void setStars(double Stars)
	{
		this->Stars = (this->Stars + Stars) / 2;
	}

	double getStars()
	{
		return Stars;
	}








	virtual void getAllObjects() {


		Manager temp;
		string fileName = "Manager.bin";
		ifstream myFile(fileName, ios::binary);
		while (myFile.read((char*)&temp, sizeof(Manager))) {
			temp.display();

		}
		myFile.close();
	}


	virtual void Menu()
	{
		bool display = true;
		cout << "------------------------Welcome to the Manager Menu------------------------------" << endl;
		cout << "------------------------We are happy to have you on board-------------------------" << endl;
		cout << "						 1.Login" << endl;
		cout << "						 2. Main Menu " << endl;
		cout << "---------------------------------------------------------------------------------" << endl;
		int Choice;
		cout << "Enter your Desired Decision ";
		cin >> Choice;

		switch (Choice)
		{
		case 1:
			login();
			
			break;
		case 2:
			return_Status = 1;
			break;

		default:
			cout << "You have Entered a wrong input value " << endl<<endl;
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

		cout << "Press 1 to go to Inventory of store" << endl;
		cout << "Press 2 for main menu" << endl;
		cin >> key;
		if (key == 1) {
			man->invent();
			AdminDesktop();
		}if (key == 2) {
			return_Status = 1;
			return;
		}

	}



	virtual void login()
	{
		string username;
		string password;
		system("cls");


		cout << "User Name of the Applicant: ";
		cin >> username;
		string fileName = "Manager.bin";
		cout << "Password: of the Applicant: ";
		cin >> password;
		bool jacob;



		bool flag = true;
		jacob = flag;
		flag = verify(fileName, username, password);
		jacob = flag;
		if (jacob)
		{
			getObject(username, password);
			login_status = 1;
			cout << endl << "WElCOME " << endl;
			cout << endl << "WE Have Been Waiting for you so long " << endl;



			display();

			AdminDesktop();
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


	}


	// void Validate(string str, char ch)
	// {
	// 	while (str.find(ch) == -1)
	// 	{
	// 		cout << endl << " Please Enter a Vailid Addribute! " << endl;
	// 		cin >> str;
	// 	}

	// }

	virtual void registration()
	{

		string CNIC;
		string e_mail;
		string location;

		int id;
		int Stars;
		string username;
		string password;
		string password1;

		int experience;

		string fileName = "Manager.bin";
		cout << "				OH!  Welcome! Here You Are. We Have Been Waiting for you so long					 " << endl;
		cout << endl << endl << "-------------Registration Process-------------------------" << endl << endl;


		cout << "Enter an ID(Integer Value): ";
		cin >> id; //Prevent Id from Causing trouble 



		cin.clear();


		cout << "Username of the Applicant ";
		cin >> username;
		cout << endl;
		cout << "================================================" << endl;
		cout << " Password: of the Applicant ";
		cin >> password;
		cout << endl;
		cout << "================================================" << endl;
		cout << "Password Again: ";
		cin >> password1;
		bool compare = false;
		while (password.compare(password1) != 0)
		{
			compare = true;
			cout << "ReEnter the Password  ";
			cin >> password1;
		}

		system("cls");
		cout << "Do you Want to Register by:" << endl << "1.CNIC " << endl << "2.e_mail" << endl << endl;
		int ch;
		cout << "Please Choose : ";
		cin >> ch;

		if (ch == 1)
		{
			cout << "Enter the CNIC(13-Digit): ";
			cin >> CNIC;

			while (CNIC.size() != 13)
			{

				cout << endl << "INVALID ENTRY!" << endl;
				cout << "Please Enter a 13-Digit-CNIC number: ";
				cin >> CNIC;
			}
			
		}
		else
		{
			cout << "Enter your e_mail: " << endl;
			cin >> e_mail;
			bool special = true;

			while (e_mail.find("laiba") == -1)
			{
				special = true;
				cin.clear();
				cout << endl << "Please Enter a Vailid e_mail Address " << endl;
				cin >> e_mail;
			}

		}


		cout << "Enter You City ";
		cin >> location;
		cout << endl << "----------------------" << endl;
		cout << endl << "Enter your experience In Years: ";
		cin >> experience;
		cout << endl << "----------------------" << endl;
		cout << "Enter your Total Rating: ";
		cin >> Stars;

		bool registration = true;


		cout << endl << "--------------------------------Registration Complete--------------------------------------" << endl;

		register_status = 1;

		if (ch == 1)
		{
			Manager temp(id, username, password, CNIC, location, experience, Stars);
			Write(temp, fileName);

		}
		else
		{
			Manager temp(id, username, password, " ", location, experience, Stars);
			sete_mail(e_mail);
			Write(temp, fileName);
		}

		cin.clear();
		cin.ignore(10000, '\n');  //float

		system("Pause");
		system("cls");

		Menu();


	}

	virtual void display()
	{
		cout << "---------" << endl;
		cout << id << endl;
		cout << username;
		cout << endl;
		cout << password << endl;
		cout << CNIC << endl;
		cout << endl << location;
		cout << endl << experience;
		cout << endl;
		cout << Stars << endl << "-------------" << endl;
	}


	virtual bool verify(string fileName, string username, string password)
	{
		Manager temp;
		ifstream myFile(fileName, ios::binary);
		bool ham = true;
		// use for verification;
		while (myFile.read((char*)&temp, sizeof(Manager)))
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
	void delProfile() {
		string a;
		cout << "Please Enter the Cnic of the Manager " << endl;
		cin >> a;
		fstream myFile("Manager.bin", ios::in | ios::out | ios::binary);
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
		remove("Manager.bin");
		rename("temp.bin", "Manager.bin");

	}


};


