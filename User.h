#pragma once
#include<iostream>

using namespace std;


class User
{

protected:
	char password[100];
	bool user;
	int return_Status;
	int id;
	char username[100];
	char CNIC[100];




public:

	User(int id = 0, string username = "\0", string password = "\0", string CNIC = " ") :id(id), return_Status(0)
	{
		bool user_Interpt;
														//The strcpy_s function copies the contents 
														//in the address of src , including the 
														//terminating null character, to the location
														//that's specified by dest . The destination
														//string must be large enough to hold the 
														//source string and its terminating null character.
		strcpy_s(this->username, username.c_str());
														//The basic_string::c_str() is a builtin 
														//function in C++ which returns a pointer
														//to an array that contains a null-terminated
														//sequence of characters representing the 
														//current value of the basic_string object.
		user = false;
		strcpy_s(this->password, password.c_str());
		user_Interpt = true;
		strcpy_s(this->CNIC, CNIC.c_str());
	}


	void setName(string username)
	{
		strcpy_s(this->username, username.c_str());
	}

	int get_returnStatus()
	{
		return return_Status;
	}

	void setPassword(string password)
	{
		strcpy_s(this->password, password.c_str());
	}



	void setCNIC(string CNIC)
	{
		while (CNIC.size() != 13)
		{
			cout << endl << "Please Enter a 13-Digit Valid-CNIC number: ";
			cin >> CNIC;
		}
		strcpy_s(this->CNIC, CNIC.c_str());
	}

	string getPassword()
	{
		return password;
	}
	string getName()
	{
		return username;
	}
	int getID()
	{
		return id;

	}
	
	////////////////////////////////////////////////////////////////////////
	

	virtual void Menu()
	{

	}

	virtual bool verify()
	{
		return 0;
	}


	string getCNIC()
	{
		return CNIC;
	}
	void setID(int id)
	{
		this->id = id;
	}


	
	/// ////////////////////////////////////////////////////////////////////////
	

	virtual	void login()
	{

	}

	virtual void display()
	{

	}

	virtual void getObject(string username, string password)
	{

	}
	virtual void getAllObjects() {

	}
};