#include <iostream>
using namespace std;

int main() {
	int c = 0;
	int lx = 0;
	int x = 0;
	while (true) {
		cin >> x;
		if (x == -1) {
			break;
		}
		if (x != lx) {
			c++;
		}
		lx = x;
	}
	cout << c << "\n";
}
