#include <iostream>
using namespace std;

int main() {
	int input[5];
	int total = 0;
	for (int i = 0; i < 5; i++) {
		cin >> input[i];
	}
	
	for (int i = 0; i < 5; i++) {
		total += input[i] * input[i];
	}

	cout << total % 10;

}