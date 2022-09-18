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
	string w, r;
	cout<<"Введите слово: ";
	cin>>w;
	int e = w.length();
	for (int i=0; i < e; i++) r += "-";
	string k, m;
	int q = 0, f = 0;
	while(true){
		f = 0;
		cout<<r<<"\n";
		cout<<"Введите букву: ";
		cin>>k;
		if (k.length()==1){
			for (int i=0;i<m.length();i++){
				if(m[i]==k[0]){
					cout<<"Эта буква уже была, попробуйте еще раз.\n";
					f = 1;}}
			if (f == 1) continue;
			else m.append(k);
			for (int i=0; i<e; i++){
				if (k[0] == w[i]){ 
					r[i] = k[0];
					q++;}
			}}
		else {
			if (k == w){ cout<<"Вы угадали слово — "<<w<<"!\n"; break;}
			else {
				cout<<"К сожалению, вы не угадали слово. Вы проиграли.\n";
				break;}}
		if (w == r){
			cout<<"Вы угадали слово — "<<r<<"!\n";
			break;}}    
    return 0;
}