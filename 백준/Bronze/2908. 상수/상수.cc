#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int a, b;
	cin >> a >> b;
	int aa, bb;

	aa = a / 100 + ((a % 100) / 10) * 10 + ((a % 100) % 10) * 100;
	bb = b / 100 + ((b % 100) / 10) * 10 + ((b % 100) % 10) * 100;

	if (aa > bb) {
		cout << aa;
	}
	else {
		cout << bb;
	}
}