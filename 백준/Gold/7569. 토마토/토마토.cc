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
	int h = 0;
	cin >> h >> n >> m;
	int*** tomato = new int**[m];
	queue<int> p;
	queue<int> q;
	queue<int> e;
	int input = 0;
	int cnt = 0;

	for (int i = 0; i < m; i++) {
		tomato[i] = new int*[n];
		for (int k = 0; k < n; k++) {
			tomato[i][k] = new int[h];
			for (int j = 0; j < h; j++) {
				cin >> input;
				tomato[i][k][j] = input;
				if (input == 1)
				{
					p.push(i);
					q.push(k);
					e.push(j);
				}
			}
			
		}
	}
	bool change = true;

	while (change) {
		queue<int> qq;
		queue<int> pp;
		queue<int> ee;
		while (!q.empty() && !p.empty() && !e.empty()) {
			int ppp = p.front();
			int qqq = q.front();
			int eee = e.front();
			q.pop();
			p.pop();
			e.pop();

			if (ppp != 0 && tomato[ppp - 1][qqq][eee] == 0) {
				tomato[ppp - 1][qqq][eee] = 1;
				pp.push(ppp - 1);
				qq.push(qqq);
				ee.push(eee);
			}
			if (qqq != 0 && tomato[ppp][qqq - 1][eee] == 0) {
				tomato[ppp][qqq - 1][eee] = 1;
				pp.push(ppp);
				qq.push(qqq - 1);
				ee.push(eee);
			}
			if (ppp != m-1) {
				if (tomato[ppp + 1][qqq][eee] == 0) {
					tomato[ppp + 1][qqq][eee] = 1;
					pp.push(ppp + 1);
					qq.push(qqq);
					ee.push(eee);
				}
			}
			if (qqq != n-1 ) {
				if (tomato[ppp][qqq + 1][eee] == 0) {
					tomato[ppp][qqq + 1][eee] = 1;
					pp.push(ppp);
					qq.push(qqq + 1);
					ee.push(eee);
				}
			}
			if (eee != 0 && tomato[ppp][qqq][eee - 1] == 0) {
				tomato[ppp][qqq][eee-1] = 1;
				pp.push(ppp);
				qq.push(qqq);
				ee.push(eee - 1);
			}
			if (eee != h-1){
				if (tomato[ppp][qqq][eee + 1] == 0) {
					tomato[ppp][qqq][eee + 1] = 1;
					pp.push(ppp);
					qq.push(qqq);
					ee.push(eee + 1);
				}
			}
		}
		if (qq.empty() && pp.empty() && ee.empty()) {
			change = false;
			break;
		}
		swap(q, qq);
		swap(p, pp);
		swap(e, ee);
		qq = queue<int>();
		pp = queue<int>();
		ee = queue<int>();
		cnt++;
	}
	
	bool nozero = true;

	for (int i = 0; i < m; i++) {
		for (int k = 0; k < n; k++) {
			for (int j = 0; j < h; j++) {
				if (tomato[i][k][j] == 0)
					nozero = false;
			}
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