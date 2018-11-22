#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include <ctime>
#include "classes.h"
using namespace std;

//1
//2
//3
//8
//19
//22
//23
//24

class Tournament;
class FCteam;
class Player;
class Fan;
class Coach;
class FCnurse;
class TeamMember;
class MyOverloads;
template<class T1, class T2> class Fortask;
template <class Type1, class Type2> class myclass;
class PlayingCoach;


int main() //8?,11?
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Player player(30, 25, 44, 100, 1, 29);
	//Player newbye;
	//newbye = player;
	//newbye.vuvtmp();
	
	//MyOverloads mov;
	//mov.setstr();
	//mov = mov + " test";								//+
	//mov.getstr();

	//mov.setstr();
	//fmov = mov - "p";									//-
	//mov.getstr();

	//Fortask<int, string> ex(5, "hello");
	//ex.getInfo();
	//ex.change(8, "working");
	//ex.getInfo();
	//ex.add(2, " !!!!!");
	//ex.getInfo();
	//ex = ex + "blabla";
	//ex.getstr();
	//cout << ex.sum(5, 2);
	//cout << endl << ex.sum(12.5, 8.5);

	CharityOrganisation<string, string> charity;
	charity.setLocation("Malaysia");
	charity.getLocation();
	CharityOrganisation<float, float> charityOrg;
	charityOrg.setLocation(256.7);
	charityOrg.getLocation();



	cout << "\n-----------------------------------------\n";

	Tournament *tournament = new Tournament;
	//tournament->nameOfTournament += " !";															//+=
	FCteam *fcteam = new FCteam;
	int yn, numOfTeams;
	cout << "1 - Set data of tournament\n2 - Get data of tournament\n3 - Add teams\n4 - TRY TOURNAMENT!\n5 - Show all teams\n6 - add a coach or nurse\n7 - I am a Fan!\n";
	cin >> yn;
	if (yn == 1)
	{
		tournament->setDataOfTournament();
	}
	else if (yn == 3)
	{
		system("cls");
		cout << "Enter a number of teams u want to add: ";
		cin >> numOfTeams;
		fcteam->addTeams(fcteam, numOfTeams);
	}
	else if (yn == 4)
	{
		string str1, str2;
		system("cls");
		cout << "WELCOME IN FOOTBALL SIMULATOR!\nFIRSTLY YOU ARE A FOOTBALL MANAGER!\nWOULD YOU LIKE TO CHANGE TOURNAMENT DATA? 1 - NO | 2 - YES\n";
		cin >> yn;
		if (yn == 2)
		{
			tournament->setDataOfTournament();
		}
		cout << "\nOK! INFO ABOUT YOUR TOURNAMENT: ";
		tournament = tournament->getDataOfTournament(tournament);
		cin.get();
		cout << "\n\nFIRST STEP IS TO REGISTER TEAMS FOR TOURNAMENT";
		cin.get();
		cout << "\navailable teams : ";
		fcteam->readTeamNames();
		cout << "\nEnter a name of first team you would like to register: ";
		cin >> str1;
		cin.get();
		cout << "Enter a name of second team you would like to register: ";
		cin >> str2;
		cin.get();
		cout << "\nsearching...\n";
		fcteam->registerTeam(str1, str2);
		system("cls");
		cout << "\n\nNOW YOU SHOULD ADD STAFF TO YOUR TEAMS!\n";
		fcteam = fcteam->showRegisteredTeams();
		cout << "\nChoose coach and nurse for first teams.\nAvailable nurses: \n";
		fcteam[0].fcnurse = new FCnurse;
		fcteam[0].fcnurse = fcteam[0].fcnurse->hireNurse(fcteam[0].fcnurse);
		system("cls");
		cout << "\nAvailable coaches: \n";
		fcteam[0].coach = new Coach;
		fcteam[0].coach->hireCoach(fcteam[0].coach);
		system("cls");
		cout << "\nChoose coach and nurse for second team.\nAvailable nurses: \n";
		fcteam[1].fcnurse = new FCnurse;
		fcteam[1].fcnurse = fcteam[1].fcnurse->hireNurse(fcteam[1].fcnurse);
		system("cls");
		cout << "\nAvailable coaches: \n";
		fcteam[1].coach = new Coach;
		fcteam[1].coach->hireCoach(fcteam[1].coach);
		cout << "\n\nOK! YOUR TOURNAMENT IS READY!!\n";
		system("pause");
		system("cls");
		cout << "NOW YOU ARE A FAN! YOU CAN:\n1 - Buy a ticket\n2 - Find out registered teams\n3 - Find out about tournament\n";
		tournament->fan = new Fan;
		cin >> yn;
		if (yn == 1)
		{
			cout << "\n1 - in internet\n2 - offline\n";
			cin >> yn;
			if (yn == 1)
			{
				tournament->fan = tournament->fan->getTicket(tournament->fan, tournament);
			}
			else
			{
				tournament->fan = tournament->fan->getTicket(tournament->fan, tournament);
			}
			cout << "\n[FIFA MANAGER] set a limit by age? 1 - YES | 2 - NO\n";
			cin >> yn;
			if (yn == 1)
			{
				tournament->fan = tournament->setLimitByAge(tournament);
			}
			cout << "\n1 - Watch play\n2 - Watch training\n";
			cin >> yn;
			system("cls");
			if (yn == 1)
			{
				if (tournament->fan->checkTicket(tournament->fan) == true)
				{
					tournament->playGame(fcteam);
					fcteam[0].showResultsOfGame(fcteam);
				}
				else
				{
					if (tournament->fan->checkTicket(tournament->fan) == true)
					{
						tournament->training(fcteam);
					}
				}
				countIncome(tournament);
				countIncome(*tournament, 25);
				tournament->saveResults(fcteam);
			}
		}
		else if (yn == 2)
		{
			fcteam = fcteam->showRegisteredTeams();
			fcteam->showRegisteredTeams(fcteam, 2);
		}
		else if (yn == 3)
		{
			tournament = tournament->getDataOfTournament(tournament);
		}
	}
	else if (yn == 2)
	{
		tournament = tournament->getDataOfTournament(tournament);
	}
	else if (yn == 5)
	{
		int i = 0;
		fcteam = fcteam->showAllTeams(fcteam, i);
	}
	else if (yn == 6)
	{
		cout << "1 - Add new coach\n2 - Add new nurse\n3 - Read all nurses\n4 - Read all coaches\n";
		cin >> yn;
		if (yn == 1)
		{
			Coach *coach = new Coach;
			coach->addCoach(coach);
		}
		else if (yn == 2)
		{
			FCnurse *fcnurse = new FCnurse;
			fcnurse->addNurse(fcnurse);
		}
		else if (yn == 3)
		{
			Coach *coach = new Coach;
			coach->readCoaches(coach);
		}
		else if (yn == 4)
		{
			FCnurse *fcnurse = new FCnurse;
			fcnurse->readNurses(fcnurse);
		}
		else
		{
			cout << "\nmiss!\n";
		}
	}
	else if (yn == 7)
	{
		system("cls");
		tournament->fan = new Fan;
		cout << "1 - Buy a ticket\n2 - Show registered teams\n3 - Find out about tournament\n";
		cin >> yn;
		if (yn == 1)
		{
			cout << "\n1 - in internet\n2 - offline\n";
			cin >> yn;
			if (yn == 1)
			{
				tournament->fan = tournament->fan->getTicket(tournament->fan, tournament);
			}
			else
			{
				tournament->fan = tournament->fan->getTicket(tournament->fan, tournament);
			}
			cout << "\n[FIFA MANAGER] set a limit by age? 1 - YES | 2 - NO\n";
			cin >> yn;
			if (yn == 1)
			{
				tournament->fan = tournament->setLimitByAge(tournament);
			}
			cout << "\n1 - Watch play\n2 - Watch training\n";
			cin >> yn;
			if (yn == 1)
			{
				if (tournament->fan->checkTicket(tournament->fan) == true)
				{
					fcteam = fcteam->showRegisteredTeams();
					cout << "\nChoose coach and nurse for first teams.\nAvailable nurses: \n";
					fcteam[0].fcnurse = new FCnurse;
					fcteam[0].fcnurse = fcteam[0].fcnurse->hireNurse(fcteam[0].fcnurse);
					system("cls");
					cout << "\nAvailable coaches: \n";
					fcteam[0].coach = new Coach;
					fcteam[0].coach->hireCoach(fcteam[0].coach);
					system("cls");
					cout << "\nChoose coach and nurse for second team.\nAvailable nurses: \n";
					fcteam[1].fcnurse = new FCnurse;
					fcteam[1].fcnurse = fcteam[1].fcnurse->hireNurse(fcteam[1].fcnurse);
					system("cls");
					cout << "\nAvailable coaches: \n";
					fcteam[1].coach = new Coach;
					fcteam[1].coach->hireCoach(fcteam[1].coach);
					cout << "\n\nOK! you are ready to watch it!\n";
					system("pause");
					system("cls");
					tournament->playGame(fcteam);
					fcteam[0].showResultsOfGame(fcteam);
				}
			}
			else
			{
				if (tournament->fan->checkTicket(tournament->fan) == true)
				{
					fcteam = fcteam->showRegisteredTeams();
					tournament->training(fcteam);
				}
			}
			countIncome(tournament);
			countIncome(*tournament, 25);
			tournament->saveResults(fcteam);
		}
		else if (yn == 2)
		{
			fcteam = fcteam->showRegisteredTeams();
			fcteam->showRegisteredTeams(fcteam, 2);
		}
		else if (yn == 3)
		{
			tournament = tournament->getDataOfTournament(tournament);
		}
	}
	else { cout << "miss!"; }
	system("pause");
	return 0;
}