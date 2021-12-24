#pragma once
#include <iostream>
#include <string>
using namespace std;

class Personage {
public:
	//поля
	string name;
	int endurance;
	int carrot;
	int j = 0;
	bool k1 = true, k2 = true, k3 = true, k4 = true;

	Personage() {
		endurance = 100;
		carrot = 0;
	}
	//методы 
	void Info() {
		cout << "Его силы: " << endurance << "/100" << endl;
		cout << "Запасы " << carrot  << endl;
		cout << endl;
	}

	void create() {
		cout << "Вы создали зайку с именем: " << name << endl;
		Info();
	}

	void shot() {
		cout << "Вы прошли испытание. Теперь Ваше здоровье " << endurance << endl;
		cout << "Ваш счет: " << carrot << endl;
	}

};
