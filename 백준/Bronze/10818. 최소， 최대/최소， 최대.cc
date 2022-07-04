#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int* arr = new int[t];
	int max, min;
	int first;
	for (int i = 0; i < t; i++) {
		cin >> arr[i];
	}
	max = arr[0];
	min = arr[0];
	for (int i = 0; i < t; i++) {
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	cout << min << " " << max;
}