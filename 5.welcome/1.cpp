﻿#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	string r;
	cout<<"Введите ваше имя: ";
	cin >> r;
	cout<< "Привет, " <<r<<"\n";
    return 0;
}