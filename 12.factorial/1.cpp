#include <iostream>
#include <string>
#include <Windows.h>
#include <limits> 
#include <iomanip>

using namespace std;
long double just(int w){
	if (w==1) return 1;
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
	    if (cin.get() == (int) '\n'){
			if (w>0 && w<100000){
				cout<<just(w)<<"\n";
				break;}
			else cout << "Это не натуральное число\n";
		}
		    
		else{
			cout << "Это не число\n";
			cin.clear();
			cin.ignore(32767, '\n');}
	}
	return 0;
}