#pragma once
#include<iostream>
#include"Management.h"
#include"Manger.h"
#include<ctime>

using namespace std;


int main()
{
	int seconds = 0;
	time_t obj = time(0);
	
	Management system;
	system.Menu();
	time_t obj2 = time(0);
	cout << endl << endl;
	cout << "-------------------------------" << endl;
	cout << "Time take by the customer is :" << endl;
	cout << (obj2-obj);
	cout << "-------------------------------" << endl;
	return 0;
}
