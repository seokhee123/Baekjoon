#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int input;
	cin >> input;

	int three;
	int five;
	int out = 5000;
	bool check = false;
	
	
	for (int i = 5; i < input; i += 5) {
		if ((input - i) % 3 == 0 && out >= ((input - i) / 3) + i / 5) {
			out = ((input - i) / 3) + i/5;
			check = true;
		}
		else if ((input - i) % 3 == 0) {
			out = ((input - i) / 3) + i / 5;
			check = true;
		}
	}
	if (input % 3 == 0 && out >input/3) {
		out = input / 3;
		check = true;
	}
	if (input % 5 == 0 && out > input/5) {
		out = input / 5;
		check = true;
	}
	if (check == true) {
		cout << out;
	}
	else {
		cout << -1;
	}
	
}