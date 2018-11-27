#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Tournament;
class FCteam;
class Player;
class Fan;
class Coach;
class FCnurse;
class TeamMember;
class PlayingCoach;
class MyOverloads;

class Tournament
{
private:
	string day, month, year, place;
	ofstream infile;
	ifstream fromfile;
	int numOfFans;
public:
	Tournament& operator -=(int num);																			//-=
	string operator +=(string str);																				//+=
	Fan *fan;
	FCteam *fcteam;//17
	static string nameOfTournament;
	static void setNameOfTournament();
	static void showNameOfTournament();
	void setNumOfFans(int num);
	int getnumOfFans(Tournament* tournament);
	void setDataOfTournament();//7
	Tournament* getDataOfTournament(Tournament *tournament);//7
	void getDataOfTournament();//7
	void playGame(FCteam* fcteam);
	void saveResults(FCteam *fcteam);
	void training(FCteam* fcteam);
	Fan* setLimitByAge(Tournament *tournament);
	Tournament();//4
	~Tournament();
};

class FCteam
{
protected:
	string nameOfTeam, players[11];
	bool isWin;
	int money, rating;
	ofstream infile;
	ifstream fromfile;
public:
	FCnurse *fcnurse;
	Coach *coach;
	Player *player;//17
	int getRating();
	string getName();
	string getName(int withoutcout);
	void win();
	bool getWin();
	void addTeams(FCteam *fcteam, int num);
	void readTeamNames();
	FCteam* showAllTeams(FCteam *fcteam, int &i);
	void registerTeam(string str1, string str2);
	FCteam* showRegisteredTeams();//6
	void showRegisteredTeams(FCteam *fcteam, int k);//6
	void payMoneyForTournament(int money);
	void goTrainingWithCoach(FCteam *fcteam);
	void showResultsOfGame(FCteam *fcteam);
	FCteam();//5
	FCteam(int money, bool *win);
	~FCteam();
};

class TeamMember
{
private:
protected:
	int points;
public:
	virtual void paysalary() = 0;
	virtual void addPoints() = 0;
	virtual void showPoints() = 0;
	virtual void getName() = 0;
	TeamMember();
	virtual ~TeamMember() = 0;
};

class Player : public TeamMember
{
	friend void whatIfDeposit(int salary);//10
	friend class FCteam;//11
private:
	int money;
protected:
	string name, surname, age, country;
	int speed, health, height, weight, skill, power;
	ofstream infile;
	ifstream fromfile;
	int scored;
public:
	void vuvtmp();
	Player& operator +=(int num);															//+= 
	Player& operator *(float num);																//*
	void operator =(const Player &player);														//=
	static int salary;//12
	static void paySalary(int money);//12
	void enterPlayerInfo(Player *player);
	void healPlayer(Player *player);
	void getName() override;
	void score();
	Player();//4
	Player(int speed, int health, int height, int weight, int skill, int power);
	Player(int a);
	~Player() override;
	void setName(string str)
	{
		this->name = str;
	}
	string getname()
	{
		return this->name;
	}
	void paysalary() override;
	void addPoints() override;
	void showPoints() override;
};

class FCnurse : public TeamMember
{
protected:
	string name, surname, age, country, experience;
	int salary;
	ofstream infile;
	ifstream fromfile;
	bool isNurse = false;
	int hilled;
public:
	void addNurse(FCnurse *FCnurse);
	FCnurse* hireNurse(FCnurse *FCnurse);
	void showInfo();
	void paySalary();
	void readNurses(FCnurse *fcnurse);
	void heal();
	void getName() override;
	bool returnBool();
	FCnurse();
	~FCnurse() override;
	void paysalary() override;
	void addPoints() override;
	void showPoints() override;
};

class Coach : public TeamMember
{
protected:
	string name, surname, age, country, experience;
	int salary;
	bool isCoach = false;
	ofstream infile;
	ifstream fromfile;
	int advices;
public:
	void addCoach(Coach *coach);
	Coach* hireCoach(Coach *maincoach);
	void showInfo();
	void paySalary();
	void sayAdvice();
	void readCoaches(Coach *coach);
	void doTraining();
	void fire(Coach *coach);
	bool returnBool();
	Coach();
	Coach(string name, string surname, string age, string country, string experience);
	~Coach() override;
	void getName() override;
	void paysalary() override;
	void addPoints() override;
	void showPoints() override;
};

class PlayingCoach : public Coach, public Player, public TeamMember
{
private:
	bool isCoach;
public:
	void addPlayingCoach(PlayingCoach *playingcoach);
	PlayingCoach* readPlayingCoach(PlayingCoach* playingcoach);
	void showData(PlayingCoach* playingcoach);
	PlayingCoach() {};
	~PlayingCoach() override {};
	void getName() override;
	void paysalary() override;
	void addPoints() override;
	void showPoints() override;
};

class Fan
{
private:
	static bool ticket;
	int money;
	int age;
public:
	Fan operator ++();																		//++
	Fan operator --();																		//--	
	const bool operator ||(Fan &fan);														//||
	int getAge();
	Fan* getTicket(Fan* fan, Tournament *tournament);
	bool checkTicket(Fan *fan);
	Fan(int num);
	Fan();//4
	Fan(const bool &ticket);//4
	~Fan();
};


class MyOverloads
{
private:
	string str;
public:
	int val;
	~MyOverloads() {};
	MyOverloads() {};
	void setstr();
	void getstr();
	MyOverloads operator +(string a);																// +
	MyOverloads operator -(string a);																	//- 
};

template<class T1, class T2>
class CharityOrganisation : public Tournament
{
private:
	T1 location;
	T2 staf;
	string str;
public:
	void setLocation(T1 v1)
	{
		location = v1;
		//staf = v2;
	}
	void getLocation()
	{
		cout << "\nlocation: " << location;
	}
	CharityOrganisation() {};
	CharityOrganisation(T1 v1, T2 v2) { location = v1; staf = v2; }
	void getInfo() {cout << "val1: " << location << "    val2: " << staf; }
	void change(T1 v1, T2 v2) { location = v1; staf = v2; }
	void add(T1 v1, T2 v2) { location += v1; staf += v2;	}
	CharityOrganisation operator+(string a) { str = str + a; return *this; }
	CharityOrganisation operator-(string a) { str.erase(str.find(a), 1); return *this; }
	void setstr(){cout << "\nEnter str: "; cin >> str;}
	void getstr(){ cout << "\nYour str: " << str; }

	template <typename Func> Func sum(Func f1, Func f2) { return f1 + f2; }
};

template <class Type1, class Type2> class myclass
{
	Type1 i;
	Type2 j;
public:
	myclass(Type1 a, Type2 b) { i = a; j = b; }
	void show() { cout << i << ' ' << j << '\n'; }
};

void countIncome(Tournament *tournament);//13
void countIncome(Tournament &tournament, int podatok);//14