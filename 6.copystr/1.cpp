#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	string r, e;
	cout<<"������� ������: ";
	cin >> r;
	int k = r.length();
	for (int i= 0; i < k; i++){
		e += " ";
		e[i]= r[i];}
	cout<< "����� ������: " <<e<<"\n";
    return 0;
}