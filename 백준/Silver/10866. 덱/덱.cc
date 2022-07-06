#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int order;
	cin >> order;

	string input;
	int X;
	deque <int> d;

	for (int i = 0; i < order; i++) {
		cin >> input;
		if (input == "push_front")
		{
			cin >> X;
			d.push_front(X);
		}
		if (input == "push_back")
		{
			cin >> X;
			d.push_back(X);
		}
		else if (input == "pop_front") {
			if (d.empty() == true) {
				cout << "-1" << "\n";
			}
			else {
				cout << d.front() << "\n";
				d.pop_front();
			}
		}
		else if (input == "pop_back") {
			if (d.empty() == true) {
				cout << "-1" << "\n";
			}
			else {
				cout << d.back() << "\n";
				d.pop_back();
			}
		}
		else if (input == "size") {
			cout << d.size() << "\n";
		}
		else if (input == "empty") {
			cout << d.empty() << "\n";
		}
		else if (input == "front") {
			if (d.empty() == true) {
				cout << "-1" << "\n";
			}
			else {
				cout << d.front() << "\n";
			}
		}
		else if (input == "back") {
			if (d.empty() == true) {
				cout << "-1" << "\n";
			}
			else {
				cout << d.back() << "\n";
			}
		}

	}

}