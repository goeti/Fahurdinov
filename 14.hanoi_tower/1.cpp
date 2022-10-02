#include <iostream>
#include <string>
#include <Windows.h>
#include <limits> 
#include <iomanip>

using namespace std;

void hanoi(int n, int f, int t, int p){
	if (n != 0){
		hanoi(n-1,f, p, t);
		cout<<f<<" -> "<<t<<endl;
		hanoi(n-1,p, t, f);
	}
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	cout<<"Введите N:";
	cin>>n;
	hanoi(n,1,3,2);
	return 0;
}