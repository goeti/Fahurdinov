#include <iostream>
#include <string>
#include <Windows.h>
#include <limits> 
#include <iomanip>

using namespace std;
void just(int w){
	long long c, a = 0, b = 1;
	for (int i=0;i<w;i++){
		cout<<a<<" ";
		c = b;
		b = a+b;
		a = c;}
	cout<<"\n";
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int w;
	while(true){
		cout<<"Введите натуральное число от 1 до 100: ";
		cin>>w;
		int q = cin.get();
	    if (q != '.'){
			if (q == '\n'){
				if (w<1) {
					cout << "Это число меньше единицы\n";
					continue;}
				if (w>100) {
					cout << "Это число слишком большое\n";
					continue;}
				just(w);
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