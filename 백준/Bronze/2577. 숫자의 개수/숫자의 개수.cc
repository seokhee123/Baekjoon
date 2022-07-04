#include <iostream>
#include <string>
using namespace std;

int main() {
	int q, w, e;
	cin >> q >> w >> e;
	int total = q * w * e;
	string t = to_string(total);
	int a = 0, s = 0, d = 0, f = 0, g = 0, h = 0, j = 0, k = 0, l = 0, z = 0;

	for (int i = 0; i < t.length(); i++) {
		switch (t[i] - '0')
		{
		case 0:
			z++;
			break;
		case 1:
			a++;
			break;
		case 2:
			s++;
			break;
		case 3:
			d++;
			break;
		case 4:
			f++;
			break;
		case 5:
			g++;
			break;
		case 6:
			h++;
			break;
		case 7:
			j++;
			break;
		case 8:
			k++;
			break;
		case 9:
			l++;
			break;
		}
	}
	cout << z << "\n";
	cout << a << "\n";
	cout << s << "\n";
	cout << d << "\n";
	cout << f << "\n";
	cout << g << "\n";
	cout << h << "\n";
	cout << j << "\n";
	cout << k << "\n";
	cout << l << "\n";
	
}