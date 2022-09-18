#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	cout<<"Задумайте число N от 1 до 100, а я угадаю!\n";
	int n = 50;
	int k;
	k= n;
	int i=0;
	while (true){
		i++;
		cout<<"N больше "<<k<<" (1 да, 2 нет, 3 равно)?\n";
		int q;
		cin>>q;
		n= n/2;
		if (n==0)
			n++;
		if(q==1){
			k = k + n;}
		if (q== 2){
			k = k- n;}
		if (q==3){
			cout<<"Вы задумали "<<k<<"\n";
			break;}}
    return 0;
}