#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int num;
	cin >> num;
	int *number = new int[num];

	for (int i = 0; i < num; i++) {
		cin >> number[i];
	}

	sort(number, number + num);

	for (int i = 0; i < num; i++) {
		cout << number[i] << '\n';
	}
	
}