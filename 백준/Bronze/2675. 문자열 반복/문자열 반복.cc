#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	int t;
	int r;
	string p;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> r >> s;
		for (int k = 0; k < s.length(); k++) {
			for (int j = 0; j < r; j++) {
				cout << s[k];
			}
		}
		cout << "\n";
	}
}