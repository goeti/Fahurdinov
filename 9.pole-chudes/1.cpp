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
	cout<<"¬ведите слово: ";
	cin>>w;
	int e = w.length();
	for (int i=0; i < e; i++) r += "-";
	char k;
	int q = 0;
	while(true){
		cout<<r<<"\n";
		cout<<"¬ведите букву: ";
		cin>>k;
		for (int i=0; i<e; i++){
			if (k == w[i]){ 
				r[i] = k;
				q++;}
		}
		if (q == e){
			cout<<"¬ы угадали слово Ч "<<r<<"!\n";
			break;}}    
    return 0;
}