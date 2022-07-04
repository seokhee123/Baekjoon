#include <iostream>
using namespace std;

int main() {
	int tcase;
	cin >> tcase;
	string input;
	char o = 'O';
	int score;
	int s;
	for (int i = 0; i < tcase; i++) {
		cin >> input;
		score = 0;
		s = 0;
		for (int k = 0; k < input.length(); k++) {
			if (input[k] == o) {
				s++;
				score += s;
			}
			else {
				s = 0;
			}
		}
		cout << score << "\n";
	}
}