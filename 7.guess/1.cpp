#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	cout<<"��������� ����� N �� 1 �� 100, � � ������!\n";
	int n = 50;
	int k;
	k= n;
	int i=0;
	while (true){
		i++;
		cout<<"N ������ "<<k<<" (1 ��, 2 ���, 3 �����)?\n";
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
			cout<<"�� �������� "<<k<<"\n";
			break;}}
    return 0;
}