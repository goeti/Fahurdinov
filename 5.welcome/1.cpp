#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	string r;
	cout<<"������� ���� ���: ";
	cin >> r;
	cout<< "������, " <<r<<"\n";
    return 0;
}