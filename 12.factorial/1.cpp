#include <iostream>
#include <string>
#include <Windows.h>
#include <limits> 
#include <iomanip>

using namespace std;
long double just(int w){
	if (w==0) return 1;
	return w*just(w-1);
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int w;
	while(true){
		cout<<"Введите натуральное число: ";
		cin>>w;
		int q = cin.get();
	    if (q != '.'){
			if (q == '\n'){
				if (w<0) {
					cout << "Это число меньше нуля\n";
					continue;}
				if (w>170) {
					cout << "Это число слишком большое\n";
					continue;}
				cout<<just(w)<<"\n";
				break;
			}
			else cout << "Это не число\n";
		}    
		else cout << "Это не целое число\n";
		cin.clear();
		cin.ignore(32767, '\n');
	}
	return 0;
}