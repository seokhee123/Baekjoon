#include <iostream>
#include<string>
using namespace std;

int main() {
	int input;
	cin >> input;
	cin.ignore();
	string num;
	getline(cin, num);
	int total = 0;
	
	for (int i = 0; i < num.length(); i++) {
		total += (num[i] - '0');
	}
	cout << total;
}