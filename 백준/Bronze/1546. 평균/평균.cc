#include <iostream>
using namespace std;

int main() {
	int input;
	cin >> input;
	float* exam = new float[input];
	float* change = new float[input];

	float sum = 0;
	float avg = 0;

	for (int i = 0; i < input; i++) {
		cin >> exam[i];
	}

	float max = exam[0];
	for (int i = 0; i < input; i++) {
		if (exam[i] > max) {
			max = exam[i];
		}
	}

	for (int i = 0; i < input; i++) {
		change[i] = (exam[i] / max) * 100;
		sum += change[i];
	}
	avg = sum / input;

	cout << avg;

}