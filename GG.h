#pragma once
#include <iostream>
#include <string>
using namespace std;

class Personage {
public:
	//����
	string name;
	int endurance;
	int carrot;
	int j = 0;
	bool k1 = true, k2 = true, k3 = true, k4 = true;

	Personage() {
		endurance = 100;
		carrot = 0;
	}
	//������ 
	void Info() {
		cout << "��� ����: " << endurance << "/100" << endl;
		cout << "������ " << carrot  << endl;
		cout << endl;
	}

	void create() {
		cout << "�� ������� ����� � ������: " << name << endl;
		Info();
	}

	void shot() {
		cout << "�� ������ ���������. ������ ���� �������� " << endurance << endl;
		cout << "��� ����: " << carrot << endl;
	}

};
