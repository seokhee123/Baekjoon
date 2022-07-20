#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int in[10];
	bool n[42] = { false };
	int cnt = 0;
	for (int i = 0; i < 10; i++) {
		cin >> in[i];
		n[in[i] % 42] = true;
	}
	for (int i = 0; i < 42; i++) {
		if (n[i] == true) {
			cnt++;
		}
	}
	cout << cnt;
}
