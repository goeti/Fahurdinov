#include <iostream>
#include <string>
#include <limits> 
#include <iomanip>
#include <cmath>
#include <fstream>
#include <vector>

using namespace std;

int sum(vector<int> n) {
	int sum = 0;
	for (int i = 0; i < n.size(); i++) sum += n[i];
	return sum;
}

int combination(int s, int n, vector<int> num, vector<int>& comb) {
	int a, flag = 1;
	while (flag) {
		if (num.size() == 0) return 0;
		if (s - num[0] > 0) {
  			a = num[0];
			num.erase(find(num.begin(), num.end(), num[0]));
			vector<int> num1 = num;
			comb.push_back(a);
			combination(s - a, n, num1, comb);
			comb.pop_back();
			//cout << num[0];
		}
		if (num.size() == 0) return 0;
		if (s - num[0] == 0) {
			comb.push_back(num[0]);
			num.erase(find(num.begin(), num.end(), num[0]));
			if (comb.size() == n) {
				for (int j = 0; j < comb.size(); j++) {
					cout << comb[j] << " ";
					//cout << comb[i+1] << " ";
				}
				cout << sum(comb) << endl;
			}
			comb.pop_back();
		}
		if (num.size() == 0) return 0;
		if (s - num[0] < 0) flag = 0;
	}
	return 0;
}

int main() {
	int s, n, n1, del;
	vector<int> num = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	vector<int> comb;
	cin >> s;
	cin >> n1;
	cin >> n;
	for (int i = 0; i < 9 - n; i++) {
		cin >> del;
		num.erase(find(num.begin(), num.end(), del));
	}
	combination(s, n1, num, comb);
	//cout << num.back();
	return 0;
}