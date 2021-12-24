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
	//констурктор 
public:
	Garden() {
		damage = 10;
		stocks = 55;
		name = "Огород";
	}
	void test1() {
		damage = 0;
		stocks = 0;
		cout << "\tКакому растению вредят колорадские жуки?" << endl;
		cout << "\t1)Картошке\n\t2)Винограду\n\t3)Кактусам"<<endl;
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
		cout << "\tКогда спеет хурма?" << endl;
		cout << "\t1)в июле-сентябре\n\t2)в конце октября и до декабря"<<endl;
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
		cout << "\tКакого цвета Ночная бабочка?" << endl;
		cout << "\t1)бирюзового\n\t2)черного\n\t3)фиолетового" << endl;
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
		name = "Ремонт";
	}

	void test1() {
		damage = 0;
		stocks = 0;
		cout << "\tНа что вешаются двери?" << endl;
		cout << "\t1)на петли\n\t2)на шурупы\n\t3)на замки" << endl;
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
		cout << "\tКакой клей подходит для склейки любой обуви?" << endl;
		cout << "\t1)резиновый клей\n\t2)наирит\n\t3)полеулетановый клей" << endl;
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
		cout << "\tВ какую сторону нужно откручивать болты?" << endl;
		cout << "\t1)в какую угодно\n\t2)по часовой стрелке\n\t3)против часовой стрелки" << endl;
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
		name = "Воспитание";
	}
	void test1() {
		damage = 0;
		stocks = 0;
		cout << "\tЧто из этого ошибка в воспитании ребенка?" << endl;
		cout << "\t1)кормить его\n\t2)давать ему много свободы\n\t3)настаивать на откровенности" << endl;
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
		cout << "\tКак вести себя, если ребенок истерит?" << endl;
		cout << "\t1)оставаться спокойным\n\t2)ругать ребенка\n\t3)делаь все что попросит" << endl;
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
		cout << "\tГде должен воспитываться ребенок?" << endl;
		cout << "\t1)в школе\n\t2)в семье\n\t3)на улице	" << endl;
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
		name = "Питание";
	}
	void test1() {
		damage = 0;
		stocks = 0;
		cout << "\tВ чем больше всего коллорий?" << endl;
		cout << "\t1)масле\n\t2)рыбе\n\t3)хлебцах" << endl;
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
		cout << "\tСамой вредной для организма едой является:" << endl;
		cout << "\t1)огурцы\n\t2)чипсы\n\t3)сосиски" << endl;
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
		cout << "\tЧто из этого вредная привычка?" << endl;
		cout << "\t1)есть часто но по немногу\n\t2)есть в основном рыбу и овощи\n\t3)завтракать по дороге" << endl;
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
