#include <iostream>
#include <string>
#include <Windows.h>
#include <limits> 
#include <fstream>
#include <cctype>

using namespace std;

int sumnumber(int n) {
	int k = 0;
	while (n != 0) {
		k += n % 10;
		n /= 10;
	}
	return k;
}

void checkstr(string& name) {
	int f = 1;
	while (true) {
		f = 1;
		for (int i = 0; i < name.length(); i++) {
			if (isdigit(name[i])) {
				cout << "������������ ������, ������� ��� ���: ";
				cin >> name;
				f = 0;
				break;
			}
		}
		if (f) break;
	}
}


int main()
{
	string films[28] = { "����� �� ��������", "������� ����", "Ҹ���� ������",
		"������� ���� 2", "12 ������������ ������", "������ ��������",
		"��������� �����: ����������� ������", "������������ �����", "��������� �����: �������� ������",
		"�������, ������, ����", "������� ����", "���������� ����",
		"������", "	�������", "��������� �����: ��� ��������", "������� �����",
		"�������� ��� ������� �������", "����", "���� ��������", "��� ���������� �����",
		"�������� �����", "����� ����", "������ �������� ������", "����� ���������",
		"������ ����", "������������", "���������� 2: ������ ����", "����� � �������" };
	string people[28] = { "�.�.������", "�.�.�������", "�.�������", "�.�.�����", "�.�.�������",
		"�.�.������", "�.�.��������", "�.�.���������", "�.�.�����������", "�.�.������", "�.�.��������",
		"�.�.�����", "�.�.����������", "�.�.����� - �������", "�.�.���������", "�.�.����", "�.�.������",
		"�.�.����������", "�.�.������", "�.�.���������", "�.�.������", "�.�.��������", "�.�.������", "�.�.���",
		"�.�.��������", "�.�.��������", "�.�.���������", "�.�����" };
	string music[9] = { "�Gangsta�s Paradise� � Coolio", "�(Everything I Do) I Do It for You� � Bryan Adams",
		"�I Want to Hold Your Hand� � Beatles", "�Macarena� � Los Del Rio", "�Hey Jude� � Beatles",
		"�Candle in the Wind� � Elton John", "�I Will Always Love You� � Whitney Houston",
		"�You�re the One That I Want� � John Travolta & Olivia Newton-John", "�We Are the World� � USA for Africa" };
	setlocale(LC_CTYPE, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string name, surname;
	int year;
	char a[29] = "����������������������������";
	cout << "������� ���� ���, ������� � ��� ��������.\n";
	cout << "���: ";
	cin >> name;
	checkstr(name);
	cout << "�������: ";
	cin >> surname;
	checkstr(surname);
	cout << "��� ��������: ";
	while (true) {
		cin.clear();
		cin.ignore(32767, '\n');
		//cout << "1\n";
		cin >> year;
		int q = cin.get();
		if (q != '\n' || year < 1900 || year>2022) {
			cout << "������������ ��� ��������, ������� ��� ���: ";
			continue;
		}
		break;
	}
	char w = tolower(name[0]);
	char e = tolower(surname[0]);
	for (int i = 0; i < 28; i++) {
		if (w == a[i]) cout << films[i] << endl;
		if (e == a[i]) cout << people[i] << endl;
	}
	while (year > 9) {
		year = sumnumber(year);
	}
	cout << music[year - 1] << endl;

	return 0;
}