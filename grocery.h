#pragma once
#include<iostream>
#include<string>
#include<fstream>

//#include"Customer.h"
using namespace std;

class Feedback
{

public:
	char review[500];
	double rating;

	Feedback() {
		//review = "\0";
		this->rating = 0;
	}
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
};