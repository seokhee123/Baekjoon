#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int order;
	cin >> order;

	string input;
	int X;
	stack <int> stack;

	for (int i = 0; i < order; i++) {
		cin >> input;
		if (input == "push")
		{
			cin >> X;
			stack.push(X);
		}
		else if (input == "top") {
			if (stack.empty() == true) {
				cout << "-1" << "\n";
			}
			else {
				cout << stack.top() << "\n";
			}
		}
		else if (input == "size") {
			cout << stack.size() << "\n";
		}
		else if (input == "empty") {
			cout << stack.empty() << "\n";
		}
		else if (input == "pop") {
			if (stack.empty() == true) {
				cout << "-1" << "\n";
			}
			else {
				cout << stack.top() << "\n";
				stack.pop();
			}
		}

	}

}