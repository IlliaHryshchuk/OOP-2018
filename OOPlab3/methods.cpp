#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include <ctime>
#include "classes.h"
using namespace std;

class Tournament;
class FCteam;
class Player;
class Fan;
class Coach;
class FCnurse;
class TeamMember;
class MyOverloads;
class PlayingCoach;


string Tournament::nameOfTournament = "some tournament";
int Player::salary = 1000;
bool Fan::ticket = false;

void Player::paySalary(int money)
{
	salary += money;
}

void Tournament::setNameOfTournament()
{
	cout << ("Enter a name of tournament: ");
	cin >> nameOfTournament;
}
void Tournament::showNameOfTournament()
{
	cout << "\nName of tournament: " << nameOfTournament << endl;
}

void Tournament::setDataOfTournament()
{
	system("cls");
	infile.open("dataOfTour.txt");
	if (infile.is_open())
	{
		cout << "Enter data of competition.\nEnter a day: ";
		cin >> this->day;
		cout << "Enter a month: ";
		cin >> this->month;
		cout << "Enter a year: ";
		cin >> this->year;
		cout << "Enter a place: ";
		cin >> this->place;

		infile << this->day << endl << this->month << endl << this->year << endl << this->place << endl;
		infile.close();
		setNameOfTournament();
		cout << "Your data was added succesfully!";
		cout << "\nPress any key to continue\n";
		cin.get();
		cin.get();
	}
	else
	{
		cout << "some error";
		return;
	}
}

Tournament* Tournament::getDataOfTournament(Tournament *tournament)
{
	fromfile.open("dataOfTour.txt");
	if (fromfile.is_open())
	{
		fromfile >> tournament->day;
		fromfile >> tournament->month;
		fromfile >> tournament->year;
		fromfile >> tournament->place;
		fromfile.close();

		tournament->getDataOfTournament();
		showNameOfTournament();
		return tournament;
	}
	else
	{
		cout << "some error";
		return 0;
	}
}

void Tournament::getDataOfTournament()
{
	cout << "Data of competition.\nDay: " << this->day << "\nMonth: " << this->month << "\nYear: " << this->year << "\nPlace: " << this->place;
}

void Tournament::saveResults(FCteam *fcteam)
{
	int yn;
	cout << "\nWould you like to save results? 1 - YES | 2 - NO\n";
	cin >> yn;
	system("cls");
	if (yn == 1)
	{
		infile.exceptions(ifstream::badbit | ifstream::failbit);
		string str;
		cout << "Enter name of a file(*.txt): ";
		cin >> str;
		try
		{
			infile.open(str);
			if (fcteam[0].getWin() == true) infile << fcteam[0].getName(1) << " wins " << fcteam[1].getName(1);
			else infile << fcteam[1].getName(1) << " wins " << fcteam[0].getName(1);
			cout << "\nResults were saved succesfully!\n";
		}
		catch (const std::exception &ex)
		{
			cout << ex.what() << endl;
			cout << "Error opening file!";
		}
	}
	else
	{
		cout << "ok!";
		return;
	}
}

Fan* Tournament::setLimitByAge(Tournament *tournament)
{
	cout << "\nEnter minimum age: ";
	int num, minage, counter = 0;
	cin >> minage;
	num = tournament->getnumOfFans(tournament);
	Fan *tmpfan = new Fan[num];
	for (int i = 0; i < num; i++)
	{
		if (tournament->fan[i].getAge() > minage)
		{
			tmpfan[counter] = tournament->fan[i];
			counter++;
		}
	}
	delete[] tournament->fan;
	cout << endl << num - counter << " fans were not allowed to stadium!\n";
	cin.get();
	//tournament->setNumOfFans(counter);
	tournament -= num - counter;																					//-=
	return tmpfan;
}

void FCteam::addTeams(FCteam *fcteam, int num)
{
	infile.open("teams.txt", ios::app);
	if (infile.is_open())
	{
		FCteam *fcteam = new FCteam[num];
		for (int i = 0; i < num; i++)
		{
			cout << "Enter a team name: ";
			cin >> fcteam[i].nameOfTeam;
			cout << "Enter a rating: ";
			cin >> fcteam[i].rating;
			infile << fcteam[i].nameOfTeam << endl << fcteam[i].rating << endl;

			fcteam[i].player = new Player[3];
			for (int j = 0; j < 3; j++)
			{
				cout << "\nEnter a name of player: ";
				cin >> fcteam[i].player[j].name;
				cout << "Enter surname of player: ";
				cin >> fcteam[i].player[j].surname;
				cout << "Enter age of a player: ";
				cin >> fcteam[i].player[j].age;
				cout << "Enter a country of a player: ";
				cin >> fcteam[i].player[j].country;
				cout << "_____________________________" << endl << endl;
				infile << fcteam[i].player[j].name << endl << fcteam[i].player[j].surname << endl << fcteam[i].player[j].age << endl << fcteam[i].player[j].country << endl;
			}
		}
		infile.close();
		cout << "\nTeams were added succesfully!";
		cout << "\nPress any key to continue\n";
		cin.get();
		cin.get();
	}
}

FCteam* FCteam::showAllTeams(FCteam *fcteam, int &i)
{
	fromfile.open("teams.txt");
	if (fromfile.is_open())
	{
		system("cls");
		FCteam *fcteam = new FCteam[100];//17
		//int i = 0;
		while (fromfile >> fcteam[i].nameOfTeam)
		{
			cout << i << "-th team:\n";
			fromfile >> fcteam[i].rating;
			fcteam[i].player = new Player[3];
			for (int j = 0; j < 3; j++)
			{
				fromfile >> fcteam[i].player[j].name;
				fromfile >> fcteam[i].player[j].surname;//18
				fromfile >> fcteam[i].player[j].age;
				fromfile >> fcteam[i].player[j].country;
			}

			cout << "Name of a team: " << fcteam[i].nameOfTeam << "\nRating: " << fcteam[i].rating << endl << endl;
			for (int j = 0; j < 3; j++) cout << j + 1 << "-th player.\nName: " << fcteam[i].player[j].name << "\nSurname: " << fcteam[i].player[j].surname << "\nAge: " << fcteam[i].player[j].age << "\nCountry: " << fcteam[i].player[j].country << endl;
			cout << "____________________________________________________________" << endl;
			i++;
			if (i == 100) break;
		}
		fromfile.close();
		cout << "\nPress any key to continue\n";
		cin.get();
		cin.get();
		return fcteam;
	}
}

void FCteam::registerTeam(string str1, string str2)
{
	fromfile.open("teams.txt");
	if (fromfile.is_open())
	{
		FCteam *fcteam = new FCteam[2];//21
		int i = 0;
		while (fromfile >> fcteam[i].nameOfTeam)
		{
			fromfile >> fcteam[i].rating;
			fcteam[i].player = new Player[3];
			for (int j = 0; j < 3; j++)
			{
				fromfile >> fcteam[i].player[j].name;
				fromfile >> fcteam[i].player[j].surname;
				fromfile >> fcteam[i].player[j].age;
				fromfile >> fcteam[i].player[j].country;//20
			}
			if (fcteam[i].nameOfTeam == str1 || fcteam[i].nameOfTeam == str2) i++;
			if (i == 2) break;
		}
		fromfile.close();
		if (i != 2) { cout << "no teams found!\n"; return; }
		else
		{
			infile.open("Registration.txt");
			if (infile.is_open())
			{
				for (int i = 0; i < 2; i++)
				{
					infile << fcteam[i].nameOfTeam << endl << fcteam[i].rating << endl;
					for (int j = 0; j < 3; j++) infile << fcteam[i].player[j].name << endl << fcteam[i].player[j].surname << endl << fcteam[i].player[j].age << endl << fcteam[i].player[j].country << endl;
				}
				infile.close();
				cout << "\nTeams were registered succesfully!\n";
				cout << "\nPress any key to continue\n";
				cin.get();
				cin.get();
			}
		}
	}
}

FCteam* FCteam::showRegisteredTeams()
{
	fromfile.open("Registration.txt");
	if (fromfile.is_open())
	{
		FCteam *fcteam = new FCteam[2];
		int i = 0;
		while (fromfile >> fcteam[i].nameOfTeam)
		{
			fromfile >> fcteam[i].rating;
			fcteam[i].player = new Player[3];
			for (int j = 0; j < 3; j++)
			{
				fromfile >> fcteam[i].player[j].name;
				fromfile >> fcteam[i].player[j].surname;
				fromfile >> fcteam[i].player[j].age;
				fromfile >> fcteam[i].player[j].country;
			}
			i++;
		}
		fromfile.close();
		return fcteam;
	}
}
void FCteam::showRegisteredTeams(FCteam *fcteam, int k)
{
	for (int i = 0; i < k; i++)
	{
		cout << "Name of a team: " << fcteam[i].nameOfTeam << "\nRating: " << fcteam[i].rating << endl << endl;
		for (int j = 0; j < 3; j++) cout << j + 1 << "-th player.\nName: " << fcteam[i].player[j].name << "\nSurname: " << fcteam[i].player[j].surname << "\nAge: " << fcteam[i].player[j].age << "\nCountry: " << fcteam[i].player[j].country << endl;
		cout << "____________________________________________________________" << endl;
	}
}

bool FCteam::getWin()
{
	if (isWin == true) return true;
	else return false;
}

int Fan::getAge()
{
	return this->age;
}

Fan* Fan::getTicket(Fan* fan, Tournament *tournament)
{
	srand(time(NULL));
	int num, be = 0;
	cout << "\nEnter number of ticekts u want to buy: ";
	cin >> num;
	fan = new Fan[num];
	tournament->setNumOfFans(num);
	cout << "\n" << num << " fans have bought a ticket!\n";
	++fan[0];																						//++
	for (int i = 0; i < num; i++)
	{
		fan[i].money -= 100;
		fan[i].age = rand() % 85;
	}
	for (int i = 0; i < num-2; i++)
	{
		if (fan[i] || fan[i + 1]) be++;																//||
	}
	cout << "\n" << be << " гравців однакового віку!\n";
	//if (money < 0) { cout << "\nu lost all ur money!\n"; }
	return fan;
}

void Tournament::setNumOfFans(int num)
{
	this->numOfFans = num;
}

//void Fan::getTicket(Fan *fan)
//{
//	int num;
//	cout << "\nEnter number of ticekts u want to buy: ";
//	cin >> num;
//	this->numOfFans = num * 11;
//	cout << "\nYou have bought a ticket for " << num * 7 << "$!\n";
//	this->ticket = true;
//	this->money -= num * 5;
//	if (money < 0) { cout << "\nu lost all ur money!\n"; }
//}

bool Fan::checkTicket(Fan* fan)
{
	if (fan->ticket == true) return true;
	else return false;
}

void Tournament::training(FCteam* fcteam)
{
	if (fcteam[0].getRating() > fcteam[1].getRating())
	{
		cout << "The team ";
		fcteam[0].getName();
		cout << " Wins this training match! Our congratulations!\n";
		fcteam[0].win();
	}
	else
	{
		cout << "The team ";
		fcteam[1].getName();
		cout << " Wins this training match! Our congratulations!\n";
		fcteam[1].win();
	}
}

void Tournament::playGame(FCteam *fcteam)
{
	srand(time(NULL));
	int tmp1, tmp2;
	tmp1 = rand() % 100;
	tmp2 = rand() % 100;
	TeamMember *tm;
	if (tmp1*fcteam[0].getRating() > tmp2*fcteam[1].getRating())
	{
		tmp1 = rand() % 10;
		for (int i = 0; i < tmp1; i++) { int j = rand() % 3; fcteam[1].player[j].score();  fcteam[1].player[j].addPoints(); fcteam[1].player[j] += 300; }					//+=
		tmp1 = rand() % 10;
		for (int i = 0; i < tmp1; i++) fcteam[1].fcnurse->heal();/////////////////////////////////////////////////////////////////
		tmp1 = rand() % 10;
		for (int i = 0; i < tmp1; i++) fcteam[1].coach->sayAdvice();
		//tm = fcteam[1].fcnurse;
		//tm->addPoints();
		//tm = fcteam[1].coach;
		//tm->addPoints();
		fcteam[1].fcnurse->addPoints();
		fcteam[1].coach->addPoints();


		tmp1 = rand() % 35;
		for (int i = 0; i < tmp1; i++) { int j = rand() % 3; fcteam[0].player[j].score();  fcteam[0].player[j].addPoints(); }
		tmp1 = rand() % 35;
		for (int i = 0; i < tmp1; i++) fcteam[0].fcnurse->heal();
		tmp1 = rand() % 35;
		for (int i = 0; i < tmp1; i++) fcteam[0].coach->sayAdvice();
		//tm = fcteam[0].fcnurse;
		//tm->addPoints();
		//tm = fcteam[0].coach;
		//tm->addPoints();
		fcteam[0].fcnurse->addPoints();
		fcteam[0].coach->addPoints();


		cout << "The team ";
		fcteam[0].getName();
		cout << " Wins! Our congratulations!\n";
		fcteam[0].win();
		for (int i = 0; i < 3; i++) fcteam[0].player[i] = fcteam[0].player[i] * 1.2;													//*
		fcteam[1].payMoneyForTournament(1000);
	}
	else
	{
		tmp1 = rand() % 35;
		for (int i = 0; i < tmp1; i++) { int j = rand() % 3; fcteam[1].player[j].score();  fcteam[1].player[j].addPoints(); }
		tmp1 = rand() % 35;
		for (int i = 0; i < tmp1; i++) fcteam[1].fcnurse->heal();
		tmp1 = rand() % 35;
		for (int i = 0; i < tmp1; i++) fcteam[1].coach->sayAdvice();
		tm = fcteam[1].fcnurse;
		tm->addPoints();
		tm = fcteam[1].coach;
		tm->addPoints();
		//fcteam[1].fcnurse->addPoints();
		//fcteam[1].coach->addPoints();

		tmp1 = rand() % 10;
		for (int i = 0; i < tmp1; i++) { int j = rand() % 3; fcteam[0].player[j].score();  fcteam[0].player[j].addPoints(); }
		tmp1 = rand() % 10;
		for (int i = 0; i < tmp1; i++) fcteam[0].fcnurse->heal();
		tmp1 = rand() % 10;
		for (int i = 0; i < tmp1; i++) fcteam[0].coach->sayAdvice();
		tm = fcteam[0].fcnurse;
		tm->addPoints();
		tm = fcteam[0].coach;
		tm->addPoints();
		//fcteam[0].fcnurse->addPoints();
		//fcteam[0].coach->addPoints();

		cout << "The team ";
		fcteam[1].getName();
		cout << " Wins! Our congratulations!\n";
		fcteam[1].win();
		for (int i = 0; i < 3; i++) fcteam[1].player[i] = fcteam[1].player[i] * 1.2;													//*
		fcteam[0].payMoneyForTournament(1000);

	}
	fcteam[0].player->paySalary(500);
	fcteam[1].player->paySalary(500);
	--fan[0];																						//--
}

void Player::enterPlayerInfo(Player *player)
{
	cout << "\nEnter speed: ";
	cin >> player->speed;
	cout << "Enter health: ";
	cin >> health;
	cout << "Enter height: ";
	cin >> height;
	cout << "Enter weight: ";
	cin >> weight;
	cout << "Enter skill: ";
	cin >> skill;
	cout << "Enter power: ";
	cin >> power;
}

void Player::score()
{
	this->scored++;
}

void FCteam::payMoneyForTournament(int money)
{
	this->money += money;
}

void FCteam::readTeamNames()
{

	fromfile.open("teams.txt");
	if (fromfile.is_open())
	{
		FCteam *tmp = new FCteam;
		while (fromfile >> tmp->nameOfTeam)
		{
			fromfile >> tmp->rating;
			tmp->player = new Player[3];
			for (int j = 0; j < 3; j++)
			{
				fromfile >> tmp->player[j].name;
				fromfile >> tmp->player[j].surname;
				fromfile >> tmp->player[j].age;
				fromfile >> tmp->player[j].country;
			}
			cout << tmp->nameOfTeam << ", ";
		}
		fromfile.close();
		delete tmp;
	}
}

int FCteam::getRating()
{
	return this->rating;
}
void FCteam::showResultsOfGame(FCteam *fcteam)
{
	TeamMember *tm;
	tm = fcteam[0].player;
	cout << "\nEfficiency points of game.\nfirst team: ";
	fcteam[0].getName();
	cout << "\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "Player ";
		fcteam[0].player[i].getName();
		cout << " has got ";
		fcteam[0].player[i].showPoints();
		cout << " points\n";
	}
	cout << "coach ";
	fcteam[0].coach->getName();
	cout << " has got ";
	tm = fcteam[0].coach;
	tm->showPoints();
	cout << " points\n";
	cout << "nurse ";
	fcteam[0].fcnurse->getName();
	cout << " has got ";
	tm = fcteam[0].fcnurse;
	tm->showPoints();
	cout << " points\n";

	cout << "\n\nSecond team: ";
	fcteam[1].getName();
	cout << "\n";
	tm = fcteam[1].player;
	for (int i = 0; i < 3; i++)
	{
		cout << "Player ";
		fcteam[1].player[i].getName();
		cout << " has got ";
		fcteam[1].player[i].showPoints();
		cout << " points\n";
	}
	cout << "coach ";
	fcteam[1].coach->getName();
	cout << " has got ";
	tm = fcteam[1].coach;
	tm->showPoints();
	cout << " points\n";
	cout << "nurse ";
	fcteam[1].fcnurse->getName();
	cout << " has got ";
	tm = fcteam[1].fcnurse;
	tm->showPoints();
	cout << " points\n";

}
void FCnurse::getName()
{
	cout << this->name << " " << this->surname;
}
void Coach::getName()
{
	cout << this->name << " " << this->surname;
}
void PlayingCoach ::getName()
{
	cout << this->Player::name << " " << this->Player::surname;
}

void Player::getName()
{
	cout << this->name << " " << this->surname;
}

string FCteam::getName(int withoutcout)
{
	return this->nameOfTeam;
}

string FCteam::getName()
{
	cout << this->nameOfTeam;
	return this->nameOfTeam;
}

void FCteam::win()
{
	isWin == true;
	money += 5000;
}

void Coach::addCoach(Coach *coach)
{
	coach = new Coach;
	coach->infile.open("coaches.txt", ios::app);
	if (coach->infile.is_open())
	{
		int count;
		cout << "\nEnter a number of coaches you would like to add: ";
		cin >> count;
		for (int i = 0; i < count; i++)
		{
			cout << "\nEnter a name of coach: ";
			cin >> coach->name;
			cout << "Enter a surname of coach: ";
			cin >> coach->surname;
			cout << "Enter a age of coach: ";
			cin >> coach->age;
			cout << "Enter a country of coach: ";
			cin >> coach->country;
			cout << "Enter a experience of coach: ";
			cin >> coach->experience;
			coach->infile << coach->name << endl << coach->surname << endl << coach->age << endl << coach->country << endl << coach->experience << endl;
		}
		cout << "\nCoaches were added succesfully!";
		coach->infile.close();
		cout << "\nPress any key to continue\n";
		cin.get();
		cin.get();
	}
}

void Coach::readCoaches(Coach *coach)
{
	int i = 0;
	ifstream frmfl("coaches.txt");
	if (frmfl.is_open())
	{
		while (frmfl >> coach->name)
		{
			cout << "______________\n" << i << "-th coach:";
			frmfl >> coach->surname;
			frmfl >> coach->age;
			frmfl >> coach->country;
			frmfl >> coach->experience;
			coach->showInfo();
			i++;
		}
		frmfl.close();
	}
}

Coach* Coach::hireCoach(Coach *maincoach)
{
	Coach *coach = new Coach[100];
	//maincoach = new Coach;
	int i = 0, n;
	ifstream frmfl("coaches.txt");
	if (frmfl.is_open())
	{
		try
		{
			while (frmfl >> coach[i].name)
			{
				cout << "______________\n" << i << "-th coach:";
				frmfl >> coach[i].surname;
				frmfl >> coach[i].age;
				frmfl >> coach[i].country;
				frmfl >> coach[i].experience;
				coach[i].showInfo();
				i++; if (i == 99) throw 00001;
			}
			frmfl.close();
		}
		catch (int a) { cout << "\nERROR! code " << a << endl; }

		cout << "\nEnter a number of coach you would like to hire: ";
		try
		{
			cin >> n;
			if (n > i || n < 0) throw 0;
			maincoach->name = coach[n].name;
			maincoach->surname = coach[n].surname;
			maincoach->age = coach[n].age;
			maincoach->country = coach[n].country;
			maincoach->experience = coach[n].experience;
			maincoach->isCoach = true;
			return maincoach;
		}
		catch (int a)
		{
			cout << "...\n\nincorrect value!\n";
			return 0;
		}
	}
}

void Coach::showInfo()
{
	cout << "\nName: " << this->name << "\nSurname: " << this->surname << "\nAge: " << this->age << "\nCountry: " << this->country << "\nExperience: " << this->experience << endl;
}

void Coach::paySalary()
{
	salary += 500;
}

void Coach::doTraining()
{
}

void FCteam::goTrainingWithCoach(FCteam *fcteam)
{
	fcteam->rating += 5;
}

void Player::healPlayer(Player *player)
{
	player->health += 15;
}

void Coach::fire(Coach *coach)
{
	delete coach;
}

void FCnurse::addNurse(FCnurse *fcnurse)
{
	//fcnurse = new FCnurse;
	fcnurse->infile.open("nurses.txt", ios::app);
	if (fcnurse->infile.is_open())
	{
		//int count;
		//cout << "\nEnter a number of coaches you would like to add: ";
		//cin >> count;
		//for (int i = 0; i < count; i++)
		//{
		cout << "\nEnter a name of nurse: ";
		cin >> fcnurse->name;
		cout << "Enter a surname of nurse: ";
		cin >> fcnurse->surname;
		cout << "Enter a age of nurse: ";
		cin >> fcnurse->age;
		cout << "Enter a country of nurse: ";
		cin >> fcnurse->country;
		cout << "Enter a experience of nurse: ";
		cin >> fcnurse->experience;
		fcnurse->infile << fcnurse->name << endl << fcnurse->surname << endl << fcnurse->age << endl << fcnurse->country << endl << fcnurse->experience << endl;
		//}
		//cout << "\nCoaches were added succesfully!";
		fcnurse->isNurse = true;
		fcnurse->infile.close();
		cout << "\nPress any key to continue\n";
		cin.get();
		cin.get();
	}
}

void FCnurse::readNurses(FCnurse *fcnurse)
{
	int i = 0;
	ifstream frmfl("nurses.txt");
	if (frmfl.is_open())
	{
		while (frmfl >> fcnurse->name)
		{
			cout << "______________\n" << i << "-th nurse:";
			frmfl >> fcnurse->surname;
			frmfl >> fcnurse->age;
			frmfl >> fcnurse->country;
			frmfl >> fcnurse->experience;
			fcnurse->showInfo();
			i++;
		}
		frmfl.close();
	}
}

FCnurse* FCnurse::hireNurse(FCnurse *fctopnurse)
{
	FCnurse *fcnurse = new FCnurse[100];
	//fctopnurse = new FCnurse;
	int i = 0, n;
	ifstream frmfl("nurses.txt");
	if (frmfl.is_open())
	{
		while (frmfl >> fcnurse[i].name)
		{
			cout << "______________\n" << i << "-th nurse:";
			frmfl >> fcnurse[i].surname;
			frmfl >> fcnurse[i].age;
			frmfl >> fcnurse[i].country;
			frmfl >> fcnurse[i].experience;
			fcnurse[i].showInfo();
			i++; if (i > 100) break;
		}
		frmfl.close();

		cout << "\nEnter a number of nurse you would like to hire: ";
		try
		{
			cin >> n;
			if (n > i || n < 0) throw 0;
			fctopnurse->name = fcnurse[n].name;
			fctopnurse->surname = fcnurse[n].surname;
			fctopnurse->age = fcnurse[n].age;
			fctopnurse->country = fcnurse[n].country;
			fctopnurse->experience = fcnurse[n].experience;
			fctopnurse->isNurse = true;
			return fctopnurse;
		}
		catch (int a)
		{
			cout << "...\n\nincorrect value!\n";
			return 0;
		}
	}
}

void FCnurse::showInfo()
{
	cout << "\nName: " << this->name << "\nSurname: " << this->surname << "\nAge: " << this->age << "\nCountry: " << this->country << "\nExperience: " << this->experience << endl;
}
void FCnurse::paySalary()
{
	salary += 500;
}

void FCnurse::heal()
{
	this->hilled++;
	//hilled++;
}

void Coach::sayAdvice()
{
	//advices++;
	this->advices++;
}

bool FCnurse::returnBool()
{
	if (isNurse == true) return true;
	else return false;
}

bool Coach::returnBool()
{
	if (isCoach == true) return true;
	else return false;
}

//void getHeight()
//{
//	cout << "\nHeight = " << height;
//}
//void setHeight(T val)
//{
//	height = val;
//}

void PlayingCoach ::addPlayingCoach(PlayingCoach *playingcoach)
{
	Player::infile.open("playingcoach.txt");
	if (Player::infile.is_open())
	{
		cout << "\nEnter a name of playing coach: ";
		cin >> playingcoach->Player::name;
		cout << "Enter surname of player: ";
		cin >> playingcoach->Player::surname;
		cout << "Enter age of a player: ";
		cin >> playingcoach->Player::age;
		cout << "Enter a country of a player: ";
		cin >> playingcoach->Player::country;
		cout << "Enter a experience of coach: ";
		cin >> playingcoach->Coach::experience;
		Player::infile << Player::name << endl << Player::surname << endl << Player::age << endl << Player::country << endl << Coach::experience << endl;
		Player::infile.close();
		isCoach = true;
		cout << "\nPlaying coach was added succesfully!";
		cout << "\nPress any key to continue\n";
		cin.get();
		cin.get();
	}
}

PlayingCoach* PlayingCoach::readPlayingCoach(PlayingCoach* playingcoach)
{
	Player::fromfile.open("playingcoach.txt");
	{
		if (Player::fromfile.is_open())
		{
			Player::fromfile >> playingcoach->Player::name;
			Player::fromfile >> playingcoach->Player::surname;
			Player::fromfile >> playingcoach->Player::age;
			Player::fromfile >> playingcoach->Player::country;
			Player::fromfile >> playingcoach->Coach::experience;
		}
		Player::fromfile.close();
		playingcoach->showData(playingcoach);
		cout << "\nPress any key to continue\n";
		cin.get();
		cin.get();
	}
	return playingcoach;
}
void PlayingCoach ::showData(PlayingCoach* playingcoach)
{

	cout << "\nINFORMATION ABOUT PLAYING COACH:\nName: " << playingcoach->Player::name << "\nSurname: " << playingcoach->Player::surname << "\nAge: " << playingcoach->Player::age << "\nCountry: " << playingcoach->Player::country << "\nExperience: " << playingcoach->Coach::experience;
}

void Player::showPoints()
{
	cout << this->points;
}
void Player::paysalary()
{
	this->salary += 500;
}
void Player::addPoints()
{
	if (this->scored != 0)
	{
		this->points = this->scored * 10;
	}
}
void PlayingCoach ::showPoints()
{
	cout << this->Player::points;
}
void PlayingCoach ::paysalary()
{
	this->Player::salary += 500;
}
void PlayingCoach ::addPoints()
{
	if (this->scored != 0)
	{
		this->TeamMember::points = this->scored * 10;
	}
}
void FCnurse::showPoints()
{
	cout << points;
}
void FCnurse::paysalary()
{
	this->salary += 500;
}
void FCnurse::addPoints()
{
	if (this->hilled != 0)
	{
		this->points = this->hilled * 15;
	}
}

void Coach::showPoints()
{
	cout << points;
}
void Coach::paysalary()
{
	this->salary += 500;
}
void Coach::addPoints()
{
	if (this->advices != 0)
	{
		this->points = this->advices * 5;
	}
}

Tournament::Tournament()//4
{

}
Tournament::~Tournament()
{
	//cout << "\nend of Tournament!";
	delete[] fcteam;
}

FCteam::FCteam()
{
}
FCteam::~FCteam()
{
	//cout << "\nend of FCteam!";
}
FCteam::FCteam(int money, bool *win) : money(300), isWin(false) //5
{
}

Player::Player()
{
	money = 1;
	points = 0;
	scored = 0;
	salary = 100;
	speed = 0; health = 0; height = 0; weight = 0; skill = 0; power = 0;
}
Player::Player(int a)
{
	money = a;
}
Player::Player(int speed, int health, int height, int weight, int skill, int power)
{
	this->speed = speed; this->health = health; this->height = height; this->weight = weight; this->skill = skill; this->power = power;
}
Player::~Player()
{
	//cout << "\nend of Player!";
}

Fan::Fan(int num)//4
{
	money = num;
}
Fan::Fan()
{
	age = 0;
	money = 500;
}
Fan::Fan(const bool &ticket) //4
{
	this->ticket = ticket;
}
Fan::~Fan()
{
	//cout << "\nend of Fan!";
}

Coach::Coach()
{
	advices = 0;
	name = "0";
	surname = "0";
	age = "0";
	country = "0";
	experience = "0";
	salary = 0;
}
Coach::Coach(string name, string surname, string age, string country, string experience)
{
	this->name = name;
	this->surname = surname;
	this->age = age;
	this->country = country;
	this->experience = experience;
	salary = 0;
}
Coach::~Coach()
{
	//cout << "\nend of coach!\n";
}

FCnurse::FCnurse()
{
	hilled = 0;
}
FCnurse::~FCnurse()
{
	//cout << "\nend of FCnurse!";
}

TeamMember::TeamMember()
{
	points = 0;
}
TeamMember::~TeamMember()
{
	//cout << "\nend of TeamMember!";
}


void whatIfDeposit(int salary) //friend
{
	Player pl(100);
	cout << pl.salary * 1.1;
}

int Tournament::getnumOfFans(Tournament* tournament)
{
	return numOfFans;
}

void countIncome(Tournament *tournament)
{
	Player plr = 300;
	int income;
	income = tournament->getnumOfFans(tournament);
	income = income * 30;
	cout << "\nThe income of this tournament is: " << income << " dollars!\n";
}

void countIncome(Tournament &tournament, int podatok)
{
	float income;
	income = tournament.getnumOfFans(&tournament);
	income = income * 30 - (podatok * 0.9);
	cout << "The income of this tournament including taxes is: " << income << " dollars!\n";
}

//Fan* addFans(Fan* fan)
//{
//	int num;
//	num = fan->getnumOfFans(fan);
//	num = num * 1.3;
//	fan->addFans(num);
//	cout << "\nthis game is so loud! new fans arrived!\nNew amount of fans: " << num << endl;
//	return fan;
//}


Fan Fan::operator++()														//++
{
	ticket = true;
	return *this;
}

Fan Fan::operator--()														//--
{
	ticket = false;
	return *this;
}

const bool Fan::operator ||(Fan &fan1)										//||
{
	if (this->age == fan1.age) return true;
	else return false;
}

void Player::operator =(const Player &player)
{
	this->speed = player.speed;
	this->health = player.health;
	this->height = player.height;
	this->weight = player.weight;
	this->skill = player.skill;
	this->power = player.power;
}

string Tournament::operator +=(string str)																		//+=
{
	nameOfTournament = str;
	return nameOfTournament;
}

Player& Player::operator +=(int num)																			//+= 
{
	this->money += num;
	return *this;
}

Tournament& Tournament::operator -=(int num)																			//-= 
{
	this->numOfFans -= num;
	return *this;
}

Player& Player::operator *(float num)																					//*
{
	this->money *= num;
	return *this;
}

MyOverloads MyOverloads::operator - (string a)																						//-
{
	str.erase(str.find(a), 1);
	return *this;
}

MyOverloads MyOverloads::operator + (string a)																						//+
{
	str = str + a;
	return *this;
}

void MyOverloads::setstr()
{
	cout << "\nEnter str: ";
	cin >> str;
}

void MyOverloads::getstr()
{
	cout << "\nYour str: " << str;
}

void Player::vuvtmp()
{
	cout << speed << health << height << weight << skill << power;
}
