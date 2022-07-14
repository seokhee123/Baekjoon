#include <iostream>
#include <algorithm>
#include <queue>
#include <deque>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int m = 0;
	int n = 0;
	cin >> n >> m;
	int** tomato = new int*[m];
	queue<int> p;
	queue<int> q;
	int input = 0;
	int cnt = 0;

	for (int i = 0; i < m; i++) {
		tomato[i] = new int[n];
		for (int k = 0; k < n; k++) {
			cin >> input;
			tomato[i][k] = input;
			if (input == 1)
			{
				p.push(i);
				q.push(k);
			}
		}
	}
	bool change = true;

	while (change) {
		queue<int> qq;
		queue<int> pp;
		while (!q.empty() && !p.empty()) {
			int ppp = p.front();
			int qqq = q.front();
			q.pop();
			p.pop();

			if (ppp != 0 && tomato[ppp - 1][qqq] == 0) {
				tomato[ppp - 1][qqq] = 1;
				pp.push(ppp - 1);
				qq.push(qqq);
			}
			if (qqq != 0 && tomato[ppp][qqq - 1] == 0) {
				tomato[ppp][qqq - 1] = 1;
				pp.push(ppp);
				qq.push(qqq - 1);
			}
			if (ppp != m-1) {
				if (tomato[ppp + 1][qqq] == 0) {
					tomato[ppp + 1][qqq] = 1;
					pp.push(ppp + 1);
					qq.push(qqq);
				}
			}
			if (qqq != n-1 ) {
				if (tomato[ppp][qqq + 1] == 0) {
					tomato[ppp][qqq + 1] = 1;
					pp.push(ppp);
					qq.push(qqq + 1);
				}
			}
		}
		if (qq.empty() && pp.empty()) {
			change = false;
			break;
		}
		swap(q, qq);
		swap(p, pp);
		qq = queue<int>();
		pp = queue<int>();
		cnt++;
	}
	
	bool nozero = true;

	for (int i = 0; i < m; i++) {
		for (int k = 0; k < n; k++) {
			if (tomato[i][k] == 0)
				nozero = false;
		}
	}
	if (nozero == true) {
		cout << cnt;
	}
	else
	{
		cout << "-1";
	}
}