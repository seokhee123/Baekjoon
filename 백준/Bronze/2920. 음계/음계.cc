#include <iostream>
using namespace std;

int main() {
	int asc[8] = { 1,2,3,4,5,6,7,8 };
	int des[8] = { 8,7,6,5,4,3,2,1 };
	int ascc = 0, dess = 0;
	int tf[8];
	
	int input[8];

	for (int i = 0; i < 8; i++) {
		cin >> input[i];
	}

	if (input[0] == 1) {
		for (int i = 0; i < 8; i++) {
			if (input[i] == asc[i])
				ascc++;
		}
	}
	else if (input[0] == 8) {
		for (int i = 0; i < 8; i++) {
			if (input[i] == des[i])
				dess++;
		}
	}

	if (ascc == 8)
		cout << "ascending";
	else if (dess == 8)
		cout << "descending";
	else
		cout << "mixed";
}