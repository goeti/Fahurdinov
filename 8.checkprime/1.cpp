#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;
int just(int r){
	//cout<<r;
	for(int i=2;i*i<=r;i++){
		//cout<<r%i;
		if(r % i == 0)
			return 0;}
		return 1;}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	int w;
	cout<<"������� ����������� �����: ";
	cin>>w;
    if (cin.get() == (int) '\n' && w>0)
        cout<<just(w)<<" (1-����� �������, 0-���������)\n";
    else
		cout << "��� �� ����������� �����\n";
		//cout<<"��� �� �����\n";}
	//else{cout<<just(w)<<"\n";}
    return 0;
}