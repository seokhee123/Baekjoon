#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input;
	cin >> input;
	char a[101] = { '0' };
	int alpha[26];
	for (int i = 0; i < 26; i++) {
		alpha[i] = -1;
	}
	for (int i = 0; i < input.length(); i++) {
		for (int k = 0; k < 26; k++) {
			if (input[i] == k + 97) {
				if (alpha[k] != -1)
					break;
				alpha[k] = i;
			}
		}
		
	}

	for (int i = 0; i < 26; i++) {
		cout << alpha[i];
		cout << " ";
	}

}