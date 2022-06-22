#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string input;
	cin >> input;

	char alpha[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	int num[26] = { 0 };
	int numa[26] = { 0 };
	char answer = 0;
	for (int i = 0; i < input.length(); i++) {
		input[i] = toupper(input[i]);
		for (int k = 0; k < 26; k++) {
			if (input[i] == alpha[k]) {
				num[k]++;
				numa[k]++;
			}
		}
	}
	sort(num, num +26, greater<int>());
	if (num[0] == num[1]) {
		cout << "?";
	}
	else {
		for (int i = 0; i < 26; i++) {
			if (num[0] == numa[i]) {
				answer = alpha[i];
			}
		}
		cout << answer;
	}	
}