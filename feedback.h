#pragma once
#include<iostream>
#include<string>
#include<fstream>

//#include"Customer.h"
using namespace std;

class Feedback
{
private:

	//string review;
	//double rating;
	//Customer cust;
	

public:
	char review[500];
	double rating;

	void Write(Feedback obj, string fileName)
	{
		ofstream myFile(fileName, ios::binary | ios::app);
		myFile.write((char*)&obj, sizeof(obj));
		myFile.close();
	}

	void setReview(string r) {
		strcpy_s(this->review, r.c_str());
	}
	void Menu()
	{
		cout << "---------------------------------Welcome to FeedBack Menu-----------------------------------" << endl;

		string fileName = "Feedback.bin";
		string r;

		cout << "Please Give a Rating out of 5:";
		cin >> this->rating;

		

		cout << "Please Give your Honest Oponion about our store ";
		cin >> r;
		setReview(r);

		Write(*this, fileName);

		cout << "-------------------------------------Thank you for your Response! ------------------------------";


		cout << " The total time spent on customer is 10 mins !" << endl;


	}
	/*void setName(string username)
	{
		strcpy_s(cust.getName().c_str(), username.c_str());
	}

	void setPassword(string password)
	{
		strcpy_s(cust.getPassword().c_str(), password.c_str());
	}*/

	//string getPassword()
	//{
	//	//return cust.getPassword();
	//}
	//string getName()
	//{
	//	//return cust.getName();
	//}
	/*virtual bool verify(string fileName, string username, string password)
	{
		return true;
		Feedback temp;
		ifstream myFile(fileName, ios::binary);
		while (myFile.read((char*)&temp, sizeof(temp)))
		{
			if ((temp.getName() == username) && (temp.getPassword() == password))
			{
				myFile.close();
				return true;

			}
		}

		myFile.close();
		return false;
	}*/

	/*void delProfile() {
		string a;
		cout << "Please Enter the Cnic of the Customer " << endl;
		cin >> a;
		fstream myFile("Feedback.bin", ios::in | ios::out | ios::binary);
		ofstream myFile_temp("temp.bin", ios::app | ios::binary);
		while (myFile.read((char*)&(*this), sizeof(this))) {
			if (review == a) {
				myFile_temp.write((char*)&(*this), sizeof(this));
			}
			else {
				cout << "Success!  Deleted." << endl;
			}
		}
		myFile.close();
		myFile_temp.close();
		remove("Feedback.bin");
		rename("temp.bin", "Feedback.bin");
	}
*/

};
