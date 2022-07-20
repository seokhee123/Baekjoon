#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int h, m;
	cin >> h >> m;

	if (m < 45) {
		if (h > 0) {
			cout << h - 1 << " " << 60 - 45 + m;
		}
		else {
			cout << "23" << " " << 60 - 45 + m;
		}
	}
	else {
		cout << h << " " << m - 45;
	}
}