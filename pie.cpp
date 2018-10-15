#include <iostream>
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	int f = -1;
	int l = -1;
	int a;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		if (a == x) {
			if (f == -1) {
				f = i;
			}
			l = i;
		}
	}
	cout << f << " " << l << "\n";
}
