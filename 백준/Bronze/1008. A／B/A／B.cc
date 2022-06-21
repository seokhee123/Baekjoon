#include <iostream>
using namespace std;

int main() {
	double a, b;

	cin >> a >> b;
	double total = a / b;
	
	cout << fixed;
	cout.precision(15);
	cout << total;
}