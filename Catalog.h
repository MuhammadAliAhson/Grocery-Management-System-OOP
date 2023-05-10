#pragma once
#include <iostream>
#include <fstream>
using namespace std;


class Personal_Hygiene {
public:
	char Shampoo[100];
	char Soap[100];
	char Hand_Sanitizer[100];

	void setShampoo(string first) {
		strcpy_s(this->Shampoo, first.c_str());
	}
	void setSoap(string first) {
		strcpy_s(this->Soap, first.c_str());
	}
	void setHand_Sanitizer(string first) {
		strcpy_s(this->Hand_Sanitizer, first.c_str());
	}

	//==================================//
	void Write(Personal_Hygiene obj, string fileName)
	{
		ofstream myFile(fileName, ios::binary | ios::app);
		myFile.write((char*)&obj, sizeof(obj));
		myFile.close();
	}

	//==============================//

	virtual void filling() {
		string fill;
		cout << "Enter your Quantity of Lentils in boxes" << endl;
		cin >> fill;
		setShampoo(fill);
		cout << "Enter your Quantity of Flour in boxes" << endl;
		cin >> fill;
		setSoap(fill);
		cout << "Enter your Quantity of Rice in boxes" << endl;
		cin >> fill;
		setHand_Sanitizer(fill);

		Write(*this, "Personal_Hygeine.txt");
		system("cls");
	}






};
class Household_Cleaning {
public:
	char Detergent[100];
	char Dish_Soap[100];
	char Washroom_Cleaner[100];

	void setDetergent(string first) {
		strcpy_s(this->Detergent, first.c_str());
	}
	void setDish_Soap(string first) {
		strcpy_s(this->Dish_Soap, first.c_str());
	}
	void setWashroom_Cleaner(string first) {
		strcpy_s(this->Washroom_Cleaner, first.c_str());
	}

	//==================================//
	void Write(Household_Cleaning obj, string fileName)
	{
		ofstream myFile(fileName, ios::binary | ios::app);
		myFile.write((char*)&obj, sizeof(obj));
		myFile.close();
	}

	//==============================//

	virtual void filling() {
		string fill;
		cout << "Enter your Quantity of Lentils in boxes" << endl;
		cin >> fill;
		setDetergent(fill);
		cout << "Enter your Quantity of Flour in boxes" << endl;
		cin >> fill;
		setDish_Soap(fill);
		cout << "Enter your Quantity of Rice in boxes" << endl;
		cin >> fill;
		setWashroom_Cleaner(fill);

		Write(*this, "Housing_Clean.txt");
		system("cls");
	}


};
class Food {
public:
	virtual void menu() {


	}



};






class Meat {
public:
	char Chicken[100];
	char	 Beef[100];
	char Mutton[100];
	char	 Fish[100];
	//==========================//
	void setChicken(string first) {
		strcpy_s(this->Chicken, first.c_str());
	}
	void setBeef(string first) {
		strcpy_s(this->Beef, first.c_str());
	}
	void setMutton(string first) {
		strcpy_s(this->Mutton, first.c_str());
	}
	void setFish(string first) {
		strcpy_s(this->Fish, first.c_str());
	}


	//==================================//
	void Write(Meat obj, string fileName)
	{
		ofstream myFile(fileName, ios::binary | ios::app);
		myFile.write((char*)&obj, sizeof(obj));
		myFile.close();
	}

	//==============================//
	virtual void filling() {
		string fill;
		cout << "Enter your Quantity of Chicken in kilos" << endl;
		cin >> fill;
		setChicken(fill);
		cout << "Enter your Quantity of Beef in kilos" << endl;
		cin >> fill;
		setBeef(fill);
		cout << "Enter your Quantity of Mutton in kilos" << endl;
		cin >> fill;
		setMutton(fill);
		cout << "Enter your Quantity of Fish in kilos" << endl;
		cin >> fill;
		setFish(fill);
		Write(*this, "Meat.txt");
		system("cls");
	}

};


class Dairy{
public:
	char Milk[100];
	char Eggs[100];
	char Yogurt[100];
	char Cheese[100];

	void setMilk(string first) {
		strcpy_s(this->Milk, first.c_str());
	}
	void setEggs(string first) {
		strcpy_s(this->Eggs, first.c_str());
	}
	void setYogurt(string first) {
		strcpy_s(this->Yogurt, first.c_str());
	}
	void setCheese(string first) {
		strcpy_s(this->Cheese, first.c_str());
	}


	//==================================//
	void Write(Dairy obj, string fileName)
	{
		ofstream myFile(fileName, ios::binary | ios::app);
		myFile.write((char*)&obj, sizeof(obj));
		myFile.close();
	}

	//==============================//
	virtual void filling() {
		string fill;
		cout << "Enter your Quantity of Milks in Liters" << endl;
		cin >> fill;
		setMilk(fill);
		cout << "Enter your Quantity of Eggs in Dozon" << endl;
		cin >> fill;
		setEggs(fill);
		cout << "Enter your Quantity of Yogurt in Liters" << endl;
		cin >> fill;
		setYogurt(fill);
		cout << "Enter your Quantity of Cheese in kilos" << endl;
		cin >> fill;
		setCheese(fill);

		Write(*this, "Dairy.txt");
		system("cls");
	}
};
//==============================================================//






class Fruit {
public:
	char Apple[100];
	char Banana[100];
	char Mango[100];
	char Orange[100];
	char Watermelon[100];

	void setApple(string first) {
		strcpy_s(this->Apple, first.c_str());
	}
	void setBanana(string first) {
		strcpy_s(this->Banana, first.c_str());
	}
	void setMango(string first) {
		strcpy_s(this->Mango, first.c_str());
	}
	void setOrange(string first) {
		strcpy_s(this->Orange, first.c_str());
	}
	void setWatermelon(string first) {
		strcpy_s(this->Watermelon, first.c_str());
	}

	//==================================//
	void Write(Fruit obj, string fileName)
	{
		ofstream myFile(fileName, ios::binary | ios::app);
		myFile.write((char*)&obj, sizeof(obj));
		myFile.close();
	}

	//==============================//
	virtual void filling() {
		string fill;
		cout << "Enter your Quantity of Apple in Kilos" << endl;
		cin >> fill;
		setApple(fill);
		cout << "Enter your Quantity of Banana in Dozon" << endl;
		cin >> fill;
		setBanana(fill);
		cout << "Enter your Quantity of Mango in Kilos" << endl;
		cin >> fill;
		setMango(fill);
		cout << "Enter your Quantity of Oranges in kilos" << endl;
		cin >> fill;
		setOrange(fill);
		cout << "Enter your Quantity of Watermelon in kilos" << endl;
		cin >> fill;
		setWatermelon(fill);

		Write(*this, "Fruit.txt");
		system("cls");
	}







};



//===========================================================//

class Vegetable {
public:
	char Tomato[100];
	char Onion[100];
	char Cucumber[100];
	char Potatoes[100];

	void setTamato(string first) {
		strcpy_s(this->Tomato, first.c_str());
	}
	void setOnion(string first) {
		strcpy_s(this->Onion, first.c_str());
	}
	void setCucumber(string first) {
		strcpy_s(this->Cucumber, first.c_str());
	}
	void setPatatoes(string first) {
		strcpy_s(this->Potatoes, first.c_str());
	}
	
	//==================================//
	void Write(Vegetable  obj, string fileName)
	{
		ofstream myFile(fileName, ios::binary | ios::app);
		myFile.write((char*)&obj, sizeof(obj));
		myFile.close();
	}

	//==============================//
	virtual void filling() {
		string fill;
		cout << "Enter your Quantity of Tamato in Kilos" << endl;
		cin >> fill;
		setTamato(fill);
		cout << "Enter your Quantity of Onion in Dozon" << endl;
		cin >> fill;
		setOnion(fill);
		cout << "Enter your Quantity of Potatoes in Kilos" << endl;
		cin >> fill;
		setPatatoes(fill);
		cout << "Enter your Quantity of Cucumber in kilos" << endl;
		cin >> fill;
		setCucumber(fill);
		Write(*this, "Vegetable.txt");
		system("cls");
	}


};






//===============================================================================//
class  Perishable_Goods :public Food {
public:
	Meat m;
	Dairy d;
	Fruit f;
	Vegetable v;
	virtual void menu() {
		int key = 0;
		cout << "Press 1 for Meat Filling" << endl;
		cout << "Press 2 for Dairy Filling" << endl;
		cout << "Press 3 for Friut Filling" << endl;
		cout << "Press 4 for Vegetable Filling" << endl;
		cin >> key;
		if (key == 1) {
			m.filling();
		}if (key == 2) {
			d.filling();
		}if (key == 3) {
			f.filling();
		}
		if (key == 4) {
			v.filling();
		}
		else {
			menu();
		}

	}




};


//===================================================================================================================//



class Snacks {
public:
	char Chocolates[100];
	char Chips[100]; 
	char Biscuits[100];


	void setChocolates(string first) {
		strcpy_s(this->Chocolates, first.c_str());
	}
	void setChips(string first) {
		strcpy_s(this->Chips, first.c_str());
	}
	void setBiscuits(string first) {
		strcpy_s(this->Biscuits, first.c_str());
	}
	//==================================//
	void Write(Snacks  obj, string fileName)
	{
		ofstream myFile(fileName, ios::binary | ios::app);
		myFile.write((char*)&obj, sizeof(obj));
		myFile.close();
	}

	//==============================//
	virtual void filling() {
		string fill;
		cout << "Enter your Quantity of Chocoltes in boxes" << endl;
		cin >> fill;
		setChocolates(fill);
		cout << "Enter your Quantity of Chips in boxes" << endl;
		cin >> fill;
		setChips(fill);
		cout << "Enter your Quantity of Biscuits in boxes" << endl;
		cin >> fill;
		setBiscuits(fill);
		
		Write(*this, "Snacks.txt");
		system("cls");
	}



};

class  Grains {
public:
	char Lentils[100];
	char Wheat[100];
	char Flour[100];
	char Rice[100];


	void setLentils(string first) {
		strcpy_s(this->Lentils, first.c_str());
	}
	void setWheat(string first) {
		strcpy_s(this->Wheat, first.c_str());
	}
	void setFlour(string first) {
		strcpy_s(this->Flour, first.c_str());
	}
	void setRice(string first) {
		strcpy_s(this->Rice, first.c_str());
	}
	//==================================//
	void Write(Grains  obj, string fileName)
	{
		ofstream myFile(fileName, ios::binary | ios::app);
		myFile.write((char*)&obj, sizeof(obj));
		myFile.close();
	}

	//==============================//

	 void filling() {
		string fill;
		cout << "Enter your Quantity of Lentils in boxes" << endl;
		cin >> fill;
		setLentils(fill);
		cout << "Enter your Quantity of Flour in boxes" << endl;
		cin >> fill;
		setFlour(fill);
		cout << "Enter your Quantity of Rice in boxes" << endl;
		cin >> fill;
		setRice(fill);
		cout << "Enter your Quantity of Wheat in boxes" << endl;
		cin >> fill;
		setWheat(fill);

		Write(*this, "Grains.txt");
		system("cls");
	}




};



class Non_Perishable_Goods :public Food {
public:
	Snacks s;
	Grains g;
	virtual void menu() {

		int key = 0;
		cout << "Press 0 to terminate" << endl;
		cout << "Press 1 for Snack Filling" << endl;
		cout << "Press 2 for Grains Filling" << endl;
	

		cin >> key;
		if (key == 0) {
			return;
		}
		if (key == 1) {
			s.filling();
		}if (key == 2) {
			g.filling();
		}
		else {
			cout << "Invalid" << endl;
			menu();
		}

	}



};






class catalog {
public:
	Food* ptr;
	Personal_Hygiene p;
	Household_Cleaning h;
	void menu() {
		int key = 0;
		int one = 0;
		cout << "Press 1 for Food Catalog" << endl;
		cout << "Press 2 for Personal Hygiene catalog" << endl;
		cout << "Press 3 for House hold Cleaning" << endl;
		cin >> key;
		if (key == 1) {
			cout << "Press 1 for Perishable_Goods" << endl;
			cout << "Press 2 for Non-Perishable_Goods" << endl;
			cin >> one;
			if (one == 1) {
				ptr = new Perishable_Goods;
				ptr->menu();
			}
			if (one == 2) {
				ptr = new Non_Perishable_Goods;
				ptr->menu();
			}
		}
		if (key == 2) {
			p.filling();
		}if (key == 3) {
			h.filling();
		}
		else {
			menu();
		}



	}

};
