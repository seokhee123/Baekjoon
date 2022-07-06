#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int order;
	cin >> order;

	string input;
	int X;
	queue <int> q;

	for (int i = 0; i < order; i++) {
		cin >> input;
		if (input == "push")
		{
			cin >> X;
			q.push(X);
		}
		else if (input == "front") {
			if (q.empty() == true) {
				cout << "-1" << "\n";
			}
			else {
				cout << q.front() << "\n";
			}
		}
		else if (input == "back") {
			if (q.empty() == true) {
				cout << "-1" << "\n";
			}
			else {
				cout << q.back() << "\n";
			}
		}
		else if (input == "size") {
			cout << q.size() << "\n";
		}
		else if (input == "empty") {
			cout << q.empty() << "\n";
		}
		else if (input == "pop") {
			if (q.empty() == true) {
				cout << "-1" << "\n";
			}
			else {
				cout << q.front() << "\n";
				q.pop();
			}
		}

	}

}