#include <iostream>
#include "Windows.h" //русификация
#include <ctime> //для рандома
#include <cstdlib> //для паузы
#include "GG.h" //класс игрока
#include "Experience.h" // классы испытаний
#include <fstream>
#include <string>

using namespace std;

void timest(double a) { //восстановление здоровья в секунды 
	a = a * 1000;
	return Sleep(a);
}


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(NULL));

	string path = "SaveProgres.txt";
	string npath = "SaveName.txt";
	//Введение в игру

	Personage player;
	Garden gar;
	Repair rep;
	Upbringing upb;
	Nutrition nut;

	cout << "В этой игре ты будешь зайкой!\nПопытайся добыть достаточно морковки на зиму, чтоб прокормить семью!\n" << endl;
	cout << "Вернуться к предыдущему прогрессу?" << endl;
	cout << "\t1)Да\n\t2)Нет" << endl;
	int cs;
	cin >> cs;
	if (cs == 1) {       //выгрузка из файла с именем 
		fstream nsave;
		nsave.open(npath);
		if (!nsave.is_open()) {
			cout << "\tПока что ты не был зайкой" << endl;
		}
		else {
			nsave >> player.name;
			cout << "\nПрогресс востановллен" << endl;
			cout << "\t\nТебя зовут: " << player.name << endl;
		}
		nsave.close();
		fstream prosave;      //выгрузка из файла с прогрессом 
		prosave.open(path);
		if (!prosave.is_open()) {
			cout << "Пока что ты не был зайкой" << endl;
		}
		else {
			prosave >> player.carrot;
			cout << "\tЗапасы: " << player.carrot<< endl;;
			prosave >> player.k1;
			prosave >> player.k2;
			prosave >> player.k3;
			prosave >> player.k4;
			prosave >> player.j;
			cout << "\tБаллов " << player.j << "/12" << endl << endl;
		}
		prosave.close();
	}
	else {
		cout << "Твое зайчье имя?: ";
		cin >> player.name;
		cout << endl;
		player.create();
		cout << "Сейчас ты полон сил, но они не вечные, они будут тебя покидать.\nНо затем возвращаться, чем больше нужно вернуть, тем дольше ты будешь отдыхать." << endl << endl;
		ofstream saven; //сохранение в файл имени
		saven.open(npath);
		saven << player.name;
		saven.close();
	}

	cout << "\tТы разбираешься во многих областях и это может тебе помочь:" << endl << endl;

	int choise;


	for (int i = 0; i < 4; i++) {
		if (player.k1 == true) {
			cout << "\t1)" << gar.name << " " << " Морковки: " << gar.stocks << " Усталость: " << gar.damage << endl;
		}
		if (player.k2 == true) {
			cout << "\t2)" << rep.name << " " << " Морковки: " << rep.stocks << " Усталость: " << rep.damage << endl;
		}
		if (player.k3 == true) {
			cout << "\t3)" << upb.name << " " << " Морковки: " << upb.stocks << " Усталость: " << upb.damage << endl;
		}
		if (player.k4 == true) {
			cout << "\t4)" << nut.name << " " << " Морковки: " << nut.stocks << " Усталость: " << nut.damage << endl;
		}
		cout << endl;
		cin >> choise;
		if (choise == 1) {
			player.k1 = false;
			cout << "\tТвоя возможность - огород. Тебе необходимо дать советы соседу и, в зависимости от их пользы,\nты получишь от него морковку, а так же усталость от 15 (при всех правильных ответах) до 60 (при всех неправильных)" << endl << endl;
			gar.test1();
			gar.test2();
			gar.test3();
			cout << endl;
			cout << "\tТы попытался помочь соседу и вот твои результаты:" << endl;
			player.endurance = player.endurance - gar.damage;
			player.carrot = player.carrot + gar.stocks;
			cout << "Усталость: " << gar.damage << endl;
			cout << "Морковки: " << gar.stocks << endl;
			cout << "Баллы: " << gar.score << "/3" << endl << endl;
			cout << "Запасы: " << player.carrot << endl;
			player.j += gar.score;
		}
		if (choise == 2) {
			player.k2 = false;
			cout << "\tТвоя возможность - ремонт. Тебе необходимо дать советы соседу и, в зависимости от их пользы,\nты получишь от него морковку, а так же усталость от 15 (при всех правильных ответах) до 60 (при всех неправильных)" << endl << endl;
			rep.test1();
			rep.test2();
			rep.test3();
			cout << endl;
			cout << "Ты попытался помочь соседу и вот твои результаты:" << endl;
			player.endurance = player.endurance - rep.damage;
			player.carrot = player.carrot + rep.stocks;
			cout << "Усталость: " << rep.damage << endl;
			cout << "Морковки: " << rep.stocks << endl;
			cout << "\tБаллы: " << rep.score << "/3" << endl << endl;
			cout << "Запасы: " << player.carrot << endl;
			player.j += rep.score;
		}
		if (choise == 3) {
			player.k3 = false;
			cout << "\tТвоя возможность - воспитание. Тебе необходимо дать советы соседу и, в зависимости от их пользы,\nты получишь от него морковку, а так же усталость от 15 (при всех правильных ответах) до 60 (при всех неправильных)" << endl << endl;
			upb.test1();
			upb.test2();
			upb.test3();
			cout << endl;
			cout << "\tТы попытался помочь соседу и вот твои результаты:" << endl;
			player.endurance = player.endurance - upb.damage;
			player.carrot = player.carrot + upb.stocks;
			cout << "Усталость: " << upb.damage << endl;
			cout << "Морковки: " << upb.stocks << endl;
			cout << "\tБаллы: " << upb.score << "/3" << endl << endl;
			cout << "Запасы: " << player.carrot << endl;
			player.j += upb.score;
		}
		if (choise == 4) {
			player.k4 = false;
			cout << "\tТвоя возможность - питание. Тебе необходимо дать советы соседу и, в зависимости от их пользы,\nты получишь от него морковку, а так же усталость от 15 (при всех правильных ответах) до 60 (при всех неправильных)" << endl << endl;
			nut.test1();
			nut.test2();
			nut.test3();
			cout << endl;
			cout << "\tТы попытался помочь соседу и вот твои результаты:" << endl;
			player.endurance = player.endurance - nut.damage;
			player.carrot = player.carrot + nut.stocks;
			cout << "Усталость: " << nut.damage << endl;
			cout << "Морковки: " << nut.stocks << endl;
			cout << "\tБаллы: " << nut.score << "/3" << endl << endl;
			cout << "Запасы: " << player.carrot << endl;
			player.j += nut.score;
		}

		cout << endl;
		cout << "\tЗдоровье: " << player.endurance << "/100" << endl;
		cout << "\tНеобходимо отдохнуть и восстановить силы. 1 секунда = 1 единице здоровья." << endl << endl;

		if (player.endurance < 100) {
			while (player.endurance < 100) {
				timest(1);
				player.endurance = player.endurance + 5;
				if (player.endurance > 99) {
					player.endurance = 100;
					cout << "\tЗдоровье восстановлено: " << player.endurance << "/100" << endl << endl;
				}
				else {
					cout << "\tВосстановлено здоровья: " << player.endurance << "/100" << endl;
				}
			}
		}


		ofstream fout;      //сохранение прогресса 
		fout.open(path);
		if (!fout.is_open()) {
			cout << "\tНе удалось уберечь запасы(" << endl;
		}
		else {
			fout << player.carrot;
			fout << "\n";
			fout << player.k1;
			fout << "\n";
			fout << player.k2;
			fout << "\n";
			fout << player.k3;
			fout << "\n";
			fout << player.k4;
			fout << "\n";
			fout << player.j;
			cout << "\tЗапасы собраны!" << endl << endl;
		}
		fout.close();

		cout << "\tДля продолжения сбора нажмите Enter" << endl;
		system("pause>nul");
		cout << endl;
	}
	cout << "\tТы подилился всеми знаниями. Твои запасы: " << player.carrot  << endl;
	cout << "\tВсего ты " << 12 - player.j << " ошибся" << endl;



	if (player.carrot < 200) {
		cout << "\tДо цели тебе не хватает: " << 200 - player.carrot << endl;
		cout << "\tУ тебя есть 3 ненужные вещи и ты можешь обменять на морковку: от 1 до 50" << endl << endl;
		for (int i = 1; i < 4; i++) {
			cout << "\tНажми Enter для проверки номера предмета " << i << endl;
			system("pause>nul");
			for (int i = 3; i > 0; i--) {
				cout << "\t" << i;
				for (int i = 3; i > 0; i--) {
					Sleep(300);
					cout << " . ";
				}
				cout << endl;
			}
			int win = rand() % 500 + 1;
			cout << "\tТвоя добыча = " << win << endl;
			player.carrot += win;
		}
		cout << "\tЗапасы: " << player.carrot << endl;
		if (player.carrot >= 200) {
			cout << "\tПоздравляю! Ты достиг цели и накопил 200 морковок\n\tСпасибо за игру!" << endl;
		}
		else {
			cout << "\tК сожалению, ты не справился с задачей и проиграл, попробуй пройти игру ещё раз!" << endl;

		}
	}
	else {
		cout << "\tТы молодец и спас свою семью от голода! Ты хороший заяц, семья может на тебя положиться!" << endl << endl;
		cout << "\tСпасибо за игру!" << endl;
		system("pause>nul");
	}
	return 0;
}
