#include <iostream>
#include <string>

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
	setlocale(LC_ALL, "");
	/*string r, e;
	cout<<"Hello World\n";
	cout<<"Input name\n";
	cin >> r;
	int k = r.length();
	for (int i= 0; i < k; i++){
		e += " ";
		e[i]= r[i];}
	cout<< "your name " << e<<"\n";*/
	/*cout<<"��������� ����� N �� 1 �� 100, � � ������!\n";
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
			break;}}*/
	int w;
	cin>>w;
	cout<<just(w)<<"\n";
    return 0;
}