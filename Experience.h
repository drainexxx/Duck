#pragma once
#include <iostream>
using namespace std;


class main {   
public:
	string name;
	int damage;
	int stocks; 
	int score=0;
};



class Garden: public main {
	//����������� 
public:
	Garden() {
		damage = 10;
		stocks = 55;
		name = "������";
	}
	void test1() {
		damage = 0;
		stocks = 0;
		cout << "\t������ �������� ������ ����������� ����?" << endl;
		cout << "\t1)��������\n\t2)���������\n\t3)��������"<<endl;
		int i;
		cin >> i;
		if (i == 1) {
			damage = damage + 5;
			stocks = stocks + 15;
			score++;
		}
		else if (i==2) {
			damage = damage + 35;
			stocks = stocks + 5;
		}
		else if (i == 3) {
			damage = damage + 35;
			stocks = stocks + 5;
		}
	}
	void test2() {
		cout << "\t����� ����� �����?" << endl;
		cout << "\t1)� ����-��������\n\t2)� ����� ������� � �� �������"<<endl;
		int i;
		cin >> i;
		if (i == 1) {
			damage = damage + 25;
			stocks = stocks + 10;
		}
		else if (i == 2) {
			damage = damage + 5;
			stocks = stocks + 25;
			score++;
		}
	}
	void test3() {
		cout << "\t������ ����� ������ �������?" << endl;
		cout << "\t1)����������\n\t2)�������\n\t3)�����������" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			damage = damage + 25;
			stocks = stocks + 10;
		}
		if (i == 2) {
			damage = damage + 25;
			stocks = stocks + 10;
		}
		if (i == 3) {
			damage = damage + 5;
			stocks = stocks + 15;
			score++;
		}
	}
};

class Repair: public main{
public:
	Repair() {
		damage = 60;
		stocks = 85;
		name = "������";
	}

	void test1() {
		damage = 0;
		stocks = 0;
		cout << "\t�� ��� �������� �����?" << endl;
		cout << "\t1)�� �����\n\t2)�� ������\n\t3)�� �����" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			damage = damage + 5;
			stocks = stocks + 25;
			score++;
		}
		if (i == 2) {
			damage = damage + 20;
			stocks = stocks + 5;
		}
		if (i == 3) {
			damage = damage + 20;
			stocks = stocks + 5;
		
		}
	}
	void test2() {
		cout << "\t����� ���� �������� ��� ������� ����� �����?" << endl;
		cout << "\t1)��������� ����\n\t2)������\n\t3)�������������� ����" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			damage = damage + 5;
			stocks = stocks + 40;
			score++;
		}
		if (i == 2) {
			damage = damage + 20;
			stocks = stocks + 5;
		}
		if (i == 3) {
			damage = damage + 20;
			stocks = stocks + 5;
		}
	}
	void test3() {
		cout << "\t� ����� ������� ����� ����������� �����?" << endl;
		cout << "\t1)� ����� ������\n\t2)�� ������� �������\n\t3)������ ������� �������" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			damage = damage + 20;
			stocks = stocks + 10;
		}
		if (i == 2) {
			damage = damage + 20;
			stocks = stocks + 10;
		}
		if (i == 3) {
			damage = damage + 5;
			stocks = stocks + 20;
			score++;
		}
	}
};




class Upbringing : public main {
public:
	Upbringing() {
		damage = 60;
		stocks = 60;
		name = "����������";
	}
	void test1() {
		damage = 0;
		stocks = 0;
		cout << "\t��� �� ����� ������ � ���������� �������?" << endl;
		cout << "\t1)������� ���\n\t2)������ ��� ����� �������\n\t3)���������� �� �������������" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			damage = damage + 20;
			stocks = stocks + 5;
		}
		if (i == 2) {
			damage = damage + 20;
			stocks = stocks + 5;
		}
		if (i == 3) {
			damage = damage + 5;
			stocks = stocks + 20;
			score++;
		}
	}
	void test2() {
		cout << "\t��� ����� ����, ���� ������� �������?" << endl;
		cout << "\t1)���������� ���������\n\t2)������ �������\n\t3)����� ��� ��� ��������" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			damage = damage + 5;
			stocks = stocks + 20;
			score++;
		}
		if (i == 2) {
			damage = damage + 20;
			stocks = stocks + 2;
		}
		if (i == 3) {
			damage = damage + 20;
			stocks = stocks + 5;
		}
	}
	void test3() {
		cout << "\t��� ������ ������������� �������?" << endl;
		cout << "\t1)� �����\n\t2)� �����\n\t3)�� �����	" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			damage = damage + 20;
			stocks = stocks + 5;
		}
		if (i == 2) {
			damage = damage + 5;
			stocks = stocks + 20;
			score++;
		}
		if (i == 3) {
			damage = damage + 20;
			stocks = stocks + 5;
		}
	}
};


class Nutrition : public main {
public:
	Nutrition() {
		damage = 60;
		stocks = 40;
		name = "�������";
	}
	void test1() {
		damage = 0;
		stocks = 0;
		cout << "\t� ��� ������ ����� ��������?" << endl;
		cout << "\t1)�����\n\t2)����\n\t3)�������" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			damage = damage + 5;
			stocks = stocks + 15;
			score++;
		}
		if (i == 2) {
			damage = damage + 20;
			stocks = stocks + 5;
		}
		if (i == 3) {
			damage = damage + 20;
			stocks = stocks + 5;
		}
	}
	void test2() {
		cout << "\t����� ������� ��� ��������� ���� ��������:" << endl;
		cout << "\t1)������\n\t2)�����\n\t3)�������" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			damage = damage + 20;
			stocks = stocks + 5;
		}
		if (i == 2) {
			damage = damage + 5;
			stocks = stocks + 10;
			score++;
		}
		if (i == 3) {
			damage = damage + 20;
			stocks = stocks + 5;
		}
	}
	void test3() {
		cout << "\t��� �� ����� ������� ��������?" << endl;
		cout << "\t1)���� ����� �� �� �������\n\t2)���� � �������� ���� � �����\n\t3)���������� �� ������" << endl;
		int i;
		cin >> i;
		if (i == 1) {
			damage = damage + 20;
			stocks = stocks + 5;
		}
		if (i == 2) {
			damage = damage + 20;
			stocks = stocks + 5;
		}
		if (i == 3) {
			damage = damage + 5;
			stocks = stocks + 15;
			score++;
		}
	}
};
