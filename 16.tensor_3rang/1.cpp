#include <iostream>
#include <string>
#include <Windows.h>
#include <limits> 
#include <iomanip>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int*** m =new int**[3];
	for (int i = 0 ;i<3;i++){
		m[i] = new int*[3];
		for (int j=0 ;j < 3;j++){
			m[i][j] = new int[3];}}
	int n = 1;
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			for (int k=0;k<3;k++){
				m[i][j][k] = n;
				n++;
				//cout<<m[i][j][k]<<endl;
			}}}
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			for (int k=0;k<3;k++){
				m[i][j][k] = 28-m[i][j][k];
				//cout<<m[i][j][k]<<endl;
			}}}
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			delete [] m[i][j];}
		delete [] m[i];}
	delete [] m;
	return 0;
}