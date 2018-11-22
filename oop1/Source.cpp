//з .dat в .txt тих, хто в констр.бюро 
#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
using namespace std;

typedef struct StudentBase {
	char name[100], surname[100], gurtok[100];
	int year;
}StudBase;

typedef struct StudentsWithPhones {
	char name[100], surname[100], address[100];
	long int phone;
}StudWithPhones;

void RW();
void RD();
void RD(string name);
void RW(int a);
void RD(int a);
void FindByYear();
void SortByPhone();
int Menushka();
void ReadAndCopy();
string ToRead, ToCopy;

int main(int argc, char* argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	if (argc > 1)
	{
		ToRead = argv[1];
	}
	if (argc > 2)
	{
		ToCopy = argv[2];
	}
	else {
		return 0;
	}
	
	Menushka();
	return 0;
}

void ReadAndCopy()
{
	StudBase person;
	ifstream file1(ToRead, ios::binary);
	ofstream file2(ToCopy, ios::binary);
	if (file1.is_open() && file2.is_open())
	{
		while (file1.read((char*)&person, sizeof(StudBase)))
		{
			if (strcmp(person.gurtok, "texnar") == 0)
			{
				file2 << endl << person.name << endl << person.surname << endl << person.year << endl << person.gurtok << endl;
			}
		}
		file1.close();
		file2.close();
		RD(ToCopy);
	}
}

void RD(string name)
{
	StudBase person;
	ifstream file(name, ios::binary);
	if (file.is_open())
	{
		while (file >> person.name)
		{
			file >> person.surname;
			file >> person.year;
			file >> person.gurtok;
			cout << "Name: " << person.name << "\nSurname: " << person.surname << "\nYear: " << person.year << "\nCircle: " << person.gurtok << endl << endl;
		}
		file.close();
		cout << "\nPress any key to return to Menu\n";
		cin.get();
		cin.get();
		system("cls");
		Menushka();
	}
}



int Menushka()
{
	cout << "          WELCOME IN MY PROGRAM!\n" << endl << "1 - work with .dat file | 2 - work with .txt file | \3 - Exit\n4 - special task!\n\n";
	int Menu;
	ofstream file;
	cin >> Menu;
	if (Menu == 1)
	{
		system("cls");
		cout << "1 - Add student \n2 - Read file \n3 - find student by year \n4 - clear the file\n\n";
		cin >> Menu;
		switch (Menu)
		{
		case 1:
			system("cls");
			RW();
			break;
		case 2:
			system("cls");
			RD();
			break;
		case 3:
			system("cls"); 
			FindByYear();
			break;
		case 4:
			file.open(ToRead, ios::binary | ios::trunc);
			file.close();
			cout << "            Cleared!\nPress any key to return to Menu\n\n";
			cin.get();
			cin.get();
			system("cls");
			Menushka();
		default:
			system("cls");
			cout << endl << "nafig the system!" << endl << endl;
			Menushka();
		}

	}
	else if (Menu == 2)
	{
		system("cls");
		cout << "1 - Add student \n2 - Read file \n3 - sort students by phone numbers \n4 - clear the file\n\n";
		cin >> Menu;
		switch (Menu)
		{
		case 1:
			system("cls");
			RW(Menu);
			break;
		case 2:
			system("cls");
			RD(Menu);
			break;
		case 3:
			system("cls");
			SortByPhone();
			break;
		case 4:
			file.open("INFO.txt", ios::trunc);
			file.close();
			cout << "            Cleared!\nPress any key to return to Menu\n\n";
			cin.get();
			cin.get();
			system("cls");
			Menushka();
		default:
			system("cls");
			cout << endl << "nafig the system!" << endl << endl;
			Menushka();
		}
	}
	else if (Menu == 3)
	{
		system("cls");
		return 0;
	}
	else if (Menu == 4)
	{
		ReadAndCopy();
	}
	else
	{
		system("cls");
		cout << endl << "nafig the system!" << endl << endl;
		Menushka();
	}
}

void RW()
{
	int YN;
	StudBase Person;
	cout << "Enter a name: ";
	cin >> Person.name;
	cout << "Enter a surname: ";
	cin >> Person.surname;
	cout << "Enter a year of birth: ";
	cin >> Person.year;
	cout << "Enter a circle: ";
	cin >> Person.gurtok;

	ofstream file(ToRead, ios::binary | ios::app);

	if (file.is_open())
	{
		file.write((char *)&Person, sizeof(StudBase));
		file.close();
		system("cls");
		cout << "                           Added!\n1 - Return to Menu | 2 - Add more | 3 - clear the file\n";
		cin >> YN;
		switch (YN)
		{
		case 1: 
			system("cls");
			Menushka();
			break;
		case 2:
			system("cls");
			RW();
			break;
		case 3:
			file.open("INFO.dat", ios::binary | ios::trunc);
			file.close();
			cout << "            Cleared!\nPress any key to return to Menu\n";
			cin.get();
			cin.get();
			system("cls");
			Menushka();
		default: 
			system("cls");
			Menushka();
		}
	}
}

void RW(int a)
{
	int YN;
	StudWithPhones Student;
	cout << "Enter a name: ";
	cin >> Student.name;
	cout << "Enter a surname: ";
	cin >> Student.surname;
	cout << "Enter an address: ";
	cin >> Student.address;
	cout << "Enter an phone number: ";
	cin >> Student.phone;

	ofstream file("INFO.txt", ios::app);

	if (file.is_open())
	{
		file << Student.name << endl << Student.surname << endl << Student.address << endl << Student.phone << endl;
		file.close();
		system("cls");
		cout << "                           Added!\n1 - Return to Menu | 2 - Add more | 3 - clear the file\n";
		cin >> YN;
		switch (YN)
		{
		case 1:
			system("cls");
			Menushka();
			break;
		case 2:
			system("cls");
			RW(a);/////////////////////////////////////
			break;
		case 3:
			file.open("INFO.txt", ios::trunc);
			file.close();
			cout << "            Cleared!\nPress any key to return to Menu\n";
			cin.get();
			cin.get();
			system("cls");
			Menushka();
		default:
			system("cls");
			Menushka();
		}
	}
}

void RD()
{
	StudBase Person;
	ifstream file(ToRead, ios::binary);
	if (file.is_open())
	{
		while (file.read((char*)&Person, sizeof(StudBase)))
		{	
			cout << "Name: " << Person.name << "\nSurname: " << Person.surname << "\nYear of birth: " << Person.year << "\nCircle: " << Person.gurtok << endl << endl;
		}
			file.close();
			cout << "\nPress any key to return to Menu\n";
			cin.get();
			cin.get();
			system("cls");
			Menushka();
	}
}

void RD(int a)
{
	StudWithPhones Student;
	ifstream file("INFO.txt");
	if (file.is_open())
	{
		while (file >> Student.name)
		{
			file >> Student.surname;
			file >> Student.address;
			file >> Student.phone;
			cout << "Name: " << Student.name << "\nSurname: " << Student.surname << "\nAddress: " << Student.address << "\nPhone number: " << Student.phone << endl << endl;
		}
		file.close();
		cout << "\nPress any key to return to Menu\n";
		cin.get();
		cin.get();
		system("cls");
		Menushka();
	}
}

void FindByYear()
{
	int year;
	cout << "Enter a year: ";
	cin >> year;
	StudBase Person;
	ifstream file("INFO.dat", ios::binary);
	if (file.is_open())
	{
		while (file.read((char*)&Person, sizeof(StudBase)))
		{
			if (Person.year == year)
				cout << "Name: " << Person.name << ' ' << Person.surname << endl;
		}
		file.close();
		cout << "\n1 - find another student | 2 - return to menu\n\n";
		cin >> year;
		switch (year)
		{
		case 1:
			system("cls");
			FindByYear();
			break;
		case 2:
			system("cls");
			Menushka();
			break;
		default:
			system("cls");
			Menushka();
			break;
		}
	}
}


void SortByPhone()
{
	int size = 0;
	StudWithPhones Student;
	ifstream file("INFO.txt");
	if (file.is_open())
	{
		while (file >> Student.name)
		{
			file >> Student.surname;
			file >> Student.address;
			file >> Student.phone;
			size++;
		}
		file.close();
	}
	file.open("INFO.txt");
	StudWithPhones *StudArray = new StudWithPhones[size];
	if (file.is_open())
	{
		for (int i = 0; i <= size; i++)
		{
			file >> StudArray[i].name;
			file >> StudArray[i].surname;
			file >> StudArray[i].address;
			file >> StudArray[i].phone;
		}
		file.close();
		for (int m = 0; m < size; m++)
			for (int n = 0; n < size - 1; n++)
				if (StudArray[n].phone > StudArray[n + 1].phone)
				{
					swap(StudArray[n].phone, StudArray[n + 1].phone);
					swap(StudArray[n].name, StudArray[n + 1].name);
					swap(StudArray[n].surname, StudArray[n + 1].surname);
				}
		for (int i = 0; i < size; i++)
		{
			cout << "Phone number: " << StudArray[i].phone << "  Name: " << StudArray[i].name << ' ' << StudArray[i].surname << endl;
		}
	}
	cout << "\n\nPress any key to return to Menu\n";
	cin.get();
	cin.get();
	system("cls");
	Menushka();
}